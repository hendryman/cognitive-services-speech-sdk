/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_transcription_Participant */

#ifndef _Included_com_microsoft_cognitiveservices_speech_transcription_Participant
#define _Included_com_microsoft_cognitiveservices_speech_transcription_Participant
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_transcription_Participant
 * Method:    createParticipantHandle
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/IntRef;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_transcription_Participant_createParticipantHandle
  (JNIEnv *, jclass, jobject, jstring, jstring, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_transcription_Participant
 * Method:    getPropertyBag
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_transcription_Participant_getPropertyBag
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_transcription_Participant
 * Method:    setPreferredLanguage
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_transcription_Participant_setPreferredLanguage
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_transcription_Participant
 * Method:    setVoiceSignature
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_transcription_Participant_setVoiceSignature
  (JNIEnv *, jobject, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
