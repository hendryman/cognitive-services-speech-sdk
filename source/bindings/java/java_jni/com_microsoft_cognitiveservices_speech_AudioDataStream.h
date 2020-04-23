/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_AudioDataStream */

#ifndef _Included_com_microsoft_cognitiveservices_speech_AudioDataStream
#define _Included_com_microsoft_cognitiveservices_speech_AudioDataStream
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    createFromResult
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/IntRef;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_createFromResult
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    getStatus
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_getStatus
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    canReadData
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_canReadData__Lcom_microsoft_cognitiveservices_speech_util_SafeHandle_2J
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    canReadData
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_canReadData__Lcom_microsoft_cognitiveservices_speech_util_SafeHandle_2JJ
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    readData
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;[BLcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_readData__Lcom_microsoft_cognitiveservices_speech_util_SafeHandle_2_3BLcom_microsoft_cognitiveservices_speech_util_IntRef_2
  (JNIEnv *, jobject, jobject, jbyteArray, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    readData
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;[BJLcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_readData__Lcom_microsoft_cognitiveservices_speech_util_SafeHandle_2_3BJLcom_microsoft_cognitiveservices_speech_util_IntRef_2
  (JNIEnv *, jobject, jobject, jbyteArray, jlong, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    saveToWaveFile
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_saveToWaveFile
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    getPosition
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_getPosition
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    setPosition
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;J)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_setPosition
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_microsoft_cognitiveservices_speech_AudioDataStream
 * Method:    getPropertyBagFromStreamHandle
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_AudioDataStream_getPropertyBagFromStreamHandle
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
