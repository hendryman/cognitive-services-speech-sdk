/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_Connection */

#ifndef _Included_com_microsoft_cognitiveservices_speech_Connection
#define _Included_com_microsoft_cognitiveservices_speech_Connection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_Connection
 * Method:    connectionFromRecognizer
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_Connection_connectionFromRecognizer
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_Connection
 * Method:    openConnection
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_Connection_openConnection
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     com_microsoft_cognitiveservices_speech_Connection
 * Method:    closeConnection
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_Connection_closeConnection
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_Connection
 * Method:    connectionSendMessage
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_Connection_connectionSendMessage
  (JNIEnv *, jobject, jobject, jstring, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_Connection
 * Method:    connectionSetMessageProperty
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_Connection_connectionSetMessageProperty
  (JNIEnv *, jobject, jobject, jstring, jstring, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_Connection
 * Method:    connectionConnectedSetCallback
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_Connection_connectionConnectedSetCallback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_microsoft_cognitiveservices_speech_Connection
 * Method:    connectionDisconnectedSetCallback
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_Connection_connectionDisconnectedSetCallback
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
