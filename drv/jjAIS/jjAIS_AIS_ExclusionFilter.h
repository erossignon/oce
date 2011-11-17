/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jjAIS_AIS_ExclusionFilter */

#ifndef _Included_jjAIS_AIS_ExclusionFilter
#define _Included_jjAIS_AIS_ExclusionFilter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    AIS_ExclusionFilter_Create_1
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Create_11
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    AIS_ExclusionFilter_Create_2
 * Signature: (SZ)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Create_12
  (JNIEnv *, jobject, jshort, jboolean);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    AIS_ExclusionFilter_Create_3
 * Signature: (SIZ)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Create_13
  (JNIEnv *, jobject, jshort, jint, jboolean);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    IsOk
 * Signature: (LjjAIS/SelectMgr_EntityOwner;)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_IsOk
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    AIS_ExclusionFilter_Add_1
 * Signature: (S)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Add_11
  (JNIEnv *, jobject, jshort);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    AIS_ExclusionFilter_Add_2
 * Signature: (SI)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Add_12
  (JNIEnv *, jobject, jshort, jint);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    AIS_ExclusionFilter_Remove_1
 * Signature: (S)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Remove_11
  (JNIEnv *, jobject, jshort);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    AIS_ExclusionFilter_Remove_2
 * Signature: (SI)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Remove_12
  (JNIEnv *, jobject, jshort, jint);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    Clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_Clear
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    IsExclusionFlagOn
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_IsExclusionFlagOn
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    SetExclusionFlag
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_SetExclusionFlag
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    IsStored
 * Signature: (S)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_IsStored
  (JNIEnv *, jobject, jshort);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    ListOfStoredTypes
 * Signature: (LjjAIS/TColStd_ListOfInteger;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_ListOfStoredTypes
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_ExclusionFilter
 * Method:    ListOfSignature
 * Signature: (SLjjAIS/TColStd_ListOfInteger;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_ListOfSignature
  (JNIEnv *, jobject, jshort, jobject);

#ifdef __cplusplus
}
#endif
#endif
