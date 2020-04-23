/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream */

#ifndef _Included_com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream
#define _Included_com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream
 * Method:    createPushAudioInputStream
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream_createPushAudioInputStream
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream
 * Method:    pushAudioInputStreamWrite
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;[BI)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream_pushAudioInputStreamWrite
  (JNIEnv *, jobject, jobject, jbyteArray, jint);

/*
 * Class:     com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream
 * Method:    pushAudioInputStreamClose
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_audio_PushAudioInputStream_pushAudioInputStreamClose
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
