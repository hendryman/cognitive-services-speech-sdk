//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// mock_kws_engine_adapter.cpp: Implementation definitions for CSpxMockKwsEngineAdapter C++ class
//

#include "stdafx.h"
#include <cstring>
#include "mock_kws_engine_adapter.h"
#include "service_helpers.h"
#include "try_catch_helpers.h"
#include "mock_controller.h"

namespace Microsoft {
namespace CognitiveServices {
namespace Speech {
namespace Impl {


CSpxMockKwsEngineAdapter::CSpxMockKwsEngineAdapter() :
    m_cbAudioProcessed(0),
    m_cbFireNextKeyword(0),
    m_cbLastKeywordFired(0)
{
    SPX_DBG_TRACE_FUNCTION();
}

CSpxMockKwsEngineAdapter::~CSpxMockKwsEngineAdapter()
{
    SPX_DBG_TRACE_FUNCTION();
}

void CSpxMockKwsEngineAdapter::Init()
{
    SPX_DBG_TRACE_FUNCTION();
    SPX_IFTRUE_THROW_HR(GetSite() == nullptr, SPXERR_UNINITIALIZED);
}

void CSpxMockKwsEngineAdapter::Term()
{
    SPX_DBG_TRACE_FUNCTION();
}

void CSpxMockKwsEngineAdapter::SetFormat(const SPXWAVEFORMATEX* pformat)
{
    SPX_DBG_TRACE_VERBOSE_IF(pformat == nullptr, "%s - pformat == nullptr", __FUNCTION__);
    SPX_DBG_TRACE_VERBOSE_IF(pformat != nullptr, "%s\n  wFormatTag:      %s\n  nChannels:       %d\n  nSamplesPerSec:  %d\n  nAvgBytesPerSec: %d\n  nBlockAlign:     %d\n  wBitsPerSample:  %d\n  cbSize:          %d",
        __FUNCTION__,
        pformat->wFormatTag == WAVE_FORMAT_PCM ? "PCM" : std::to_string(pformat->wFormatTag).c_str(),
        pformat->nChannels,
        pformat->nSamplesPerSec,
        pformat->nAvgBytesPerSec,
        pformat->nBlockAlign,
        pformat->wBitsPerSample,
        pformat->cbSize);

    SPX_IFTRUE_THROW_HR(pformat != nullptr && HasFormat(), SPXERR_ALREADY_INITIALIZED);

    if (pformat != nullptr)
    {
        InitFormat(pformat);
    }
    else
    {
        TermFormat();
        End();
    }
}

void CSpxMockKwsEngineAdapter::ProcessAudio(const DataChunkPtr& audioChunk)
{
    SPX_DBG_TRACE_VERBOSE_IF(0, "%s(..., size=%d)", __FUNCTION__, audioChunk->size);
    SPX_IFTRUE_THROW_HR(!HasFormat(), SPXERR_UNINITIALIZED);

    m_cbAudioProcessed += audioChunk->size;
    if (m_cbAudioProcessed > m_cbFireNextKeyword)
    {
        // we'll pretend that the most recent packet of data is the keyword data...
        FireKeywordDetected(audioChunk);
    }
}

void CSpxMockKwsEngineAdapter::InitFormat(const SPXWAVEFORMATEX* pformat)
{
    SPX_IFTRUE_THROW_HR(HasFormat(), SPXERR_ALREADY_INITIALIZED);

    auto sizeOfFormat = sizeof(SPXWAVEFORMATEX) + pformat->cbSize;
    m_format = SpxAllocWAVEFORMATEX(sizeOfFormat);
    memcpy(m_format.get(), pformat, sizeOfFormat);

    m_cbAudioProcessed = 0;
    m_cbLastKeywordFired = 0;

    m_cbFireNextKeyword = m_numMsBeforeVeryFirstKeyword * m_format->nAvgBytesPerSec / 1000;
}

void CSpxMockKwsEngineAdapter::TermFormat()
{
    m_format = nullptr;
}

void CSpxMockKwsEngineAdapter::End()
{
    SPX_DBG_ASSERT(GetSite());
    GetSite()->AdapterCompletedSetFormatStop(this);
}

void CSpxMockKwsEngineAdapter::FireKeywordDetected(const DataChunkPtr& audioChunk)
{
    SPX_DBG_TRACE_FUNCTION();

    m_cbLastKeywordFired = m_cbAudioProcessed;
    m_cbFireNextKeyword += m_numMsBetweenKeywords * m_format->nAvgBytesPerSec / 1000;

    auto offset = (uint32_t)m_cbLastKeywordFired;
    auto site = GetSite();

    // we must call on the same thread as the CSpxMockKwsEngineAdapter::ProcessAudio
    // has been called.
    std::string error;
    SPXAPI_TRY()
    {
        site->KeywordDetected(this, offset, 5000/*500msec*/, 1.0, SpxGetMockParameterString("CARBON-INTERNAL-MOCK-KWS-Keyword", "keyword"), audioChunk);
    }
    SPXAPI_CATCH_ONLY()
}


} } } } // Microsoft::CognitiveServices::Speech::Impl