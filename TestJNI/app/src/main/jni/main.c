//
// Created by liliangk on 2017/8/21.
//
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_liliangk_testjni_myJNI */

#ifndef _Included_com_example_liliangk_testjni_myJNI
#define _Included_com_example_liliangk_testjni_myJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_liliangk_testjni_myJNI
 * Method:    sayHello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_liliangk_testjni_myJNI_sayHello
  (JNIEnv *env, jclass jobj)
  {
   return (*env)->NewStringUTF(env,"JNI HAHAHHAHHA");

  }

#ifdef __cplusplus
}
#endif
#endif

