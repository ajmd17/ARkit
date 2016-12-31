#include <jni.h>
#include <android/log.h>

JNIEXPORT void JNICALL Java_com_arkit_android_MainActivity_testNative(JNIEnv *env, jobject instance) {
    __android_log_print(ANDROID_LOG_DEBUG, "LOG_TAG", "Hello world");
}