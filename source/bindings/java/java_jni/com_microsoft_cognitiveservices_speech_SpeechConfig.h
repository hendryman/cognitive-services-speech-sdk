/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_SpeechConfig */

#ifndef _Included_com_microsoft_cognitiveservices_speech_SpeechConfig
#define _Included_com_microsoft_cognitiveservices_speech_SpeechConfig
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    fromSubscription
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/IntRef;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_fromSubscription
  (JNIEnv *, jclass, jobject, jstring, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    fromAuthorizationToken
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/IntRef;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_fromAuthorizationToken
  (JNIEnv *, jclass, jobject, jstring, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    fromEndpoint
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/IntRef;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_fromEndpoint
  (JNIEnv *, jclass, jobject, jstring, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    fromHost
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/IntRef;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_fromHost
  (JNIEnv *, jclass, jobject, jstring, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    getPropertyBag
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_getPropertyBag
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    setProfanity
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;I)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_setProfanity
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    setServiceProperty
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_setServiceProperty
  (JNIEnv *, jobject, jobject, jstring, jstring, jint);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechConfig
 * Method:    setAudioOutputFormat
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;I)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechConfig_setAudioOutputFormat
  (JNIEnv *, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
