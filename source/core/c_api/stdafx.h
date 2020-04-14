#pragma once

#ifdef _DEBUG
#define SPX_CONFIG_DBG_TRACE_ALL 1
#define SPX_CONFIG_TRACE_ALL 1
#else
#define SPX_CONFIG_TRACE_ALL 1
#endif

#include "speechapi_c_diagnostics.h"
#define __SPX_DO_TRACE_IMPL diagnostics_log_trace_message

#include "exception.h"
#define __SPX_THROW_HR_IMPL(hr) Microsoft::CognitiveServices::Speech::Impl::ThrowWithCallstack(hr)

#include "spxcore_common.h"

#include "try_catch_helpers.h"

#include <speechapi_c.h>
