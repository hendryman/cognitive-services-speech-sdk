/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer */

#ifndef _Included_com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer
#define _Included_com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer
 * Method:    createTranslationRecognizerFromConfig
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer_createTranslationRecognizerFromConfig
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer
 * Method:    synthesizingSetCallback
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer_synthesizingSetCallback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer
 * Method:    addTargetLanguage
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer_addTargetLanguage
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer
 * Method:    removeTargetLanguage
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_translation_TranslationRecognizer_removeTargetLanguage
  (JNIEnv *, jobject, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
