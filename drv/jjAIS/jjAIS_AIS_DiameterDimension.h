/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jjAIS_AIS_DiameterDimension */

#ifndef _Included_jjAIS_AIS_DiameterDimension
#define _Included_jjAIS_AIS_DiameterDimension
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jjAIS_AIS_DiameterDimension
 * Method:    AIS_DiameterDimension_Create_1
 * Signature: (LjjAIS/TopoDS_Shape;DLjjAIS/TCollection_ExtendedString;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_AIS_1DiameterDimension_1Create_11
  (JNIEnv *, jobject, jobject, jdouble, jobject);

/*
 * Class:     jjAIS_AIS_DiameterDimension
 * Method:    AIS_DiameterDimension_Create_2
 * Signature: (LjjAIS/TopoDS_Shape;DLjjAIS/TCollection_ExtendedString;LjjAIS/gp_Pnt;SZD)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_AIS_1DiameterDimension_1Create_12
  (JNIEnv *, jobject, jobject, jdouble, jobject, jobject, jshort, jboolean, jdouble);

/*
 * Class:     jjAIS_AIS_DiameterDimension
 * Method:    KindOfDimension
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1DiameterDimension_KindOfDimension
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_DiameterDimension
 * Method:    IsMovable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1DiameterDimension_IsMovable
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_DiameterDimension
 * Method:    DiamSymbol
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1DiameterDimension_DiamSymbol
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_DiameterDimension
 * Method:    SetDiamSymbol
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_SetDiamSymbol
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jjAIS_AIS_DiameterDimension
 * Method:    AIS_DiameterDimension_Compute_4
 * Signature: (LjjAIS/Prs3d_Projector;LjjAIS/Geom_Transformation;LjjAIS/Prs3d_Presentation;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_AIS_1DiameterDimension_1Compute_14
  (JNIEnv *, jobject, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
