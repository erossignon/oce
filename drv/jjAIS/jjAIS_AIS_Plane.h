/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jjAIS_AIS_Plane */

#ifndef _Included_jjAIS_AIS_Plane
#define _Included_jjAIS_AIS_Plane
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_Create_1
 * Signature: (LjjAIS/Geom_Plane;Z)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_11
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_Create_2
 * Signature: (LjjAIS/Geom_Plane;LjjAIS/gp_Pnt;Z)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_12
  (JNIEnv *, jobject, jobject, jobject, jboolean);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_Create_3
 * Signature: (LjjAIS/Geom_Plane;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;Z)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_13
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject, jboolean);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_Create_4
 * Signature: (LjjAIS/Geom_Axis2Placement;SZ)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_14
  (JNIEnv *, jobject, jobject, jshort, jboolean);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_SetSize_1
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetSize_11
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_SetSize_2
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetSize_12
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    UnsetSize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_UnsetSize
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    Size
 * Signature: (Ljcas/Standard_Real;Ljcas/Standard_Real;)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_Size
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    HasOwnSize
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_HasOwnSize
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    Signature
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Plane_Signature
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    Type
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Plane_Type
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    Component
 * Signature: ()LjjAIS/Geom_Plane;
 */
JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Plane_Component
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    SetComponent
 * Signature: (LjjAIS/Geom_Plane;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetComponent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    PlaneAttributes
 * Signature: (LjjAIS/Geom_Plane;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_PlaneAttributes
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    SetPlaneAttributes
 * Signature: (LjjAIS/Geom_Plane;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;LjjAIS/gp_Pnt;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetPlaneAttributes
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    Center
 * Signature: ()LjjAIS/gp_Pnt;
 */
JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Plane_Center
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    SetCenter
 * Signature: (LjjAIS/gp_Pnt;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetCenter
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    SetAxis2Placement
 * Signature: (LjjAIS/Geom_Axis2Placement;S)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetAxis2Placement
  (JNIEnv *, jobject, jobject, jshort);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    Axis2Placement
 * Signature: ()LjjAIS/Geom_Axis2Placement;
 */
JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Plane_Axis2Placement
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    TypeOfPlane
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Plane_TypeOfPlane
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    IsXYZPlane
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_IsXYZPlane
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    CurrentMode
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_CurrentMode
  (JNIEnv *, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    SetCurrentMode
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetCurrentMode
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AcceptDisplayMode
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_AcceptDisplayMode
  (JNIEnv *, jobject, jint);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    SetContext
 * Signature: (LjjAIS/AIS_InteractiveContext;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetContext
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_Compute_4
 * Signature: (LjjAIS/Prs3d_Projector;LjjAIS/Geom_Transformation;LjjAIS/Prs3d_Presentation;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Compute_14
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    ComputeSelection
 * Signature: (LjjAIS/SelectMgr_Selection;I)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_ComputeSelection
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_SetColor_1
 * Signature: (S)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetColor_11
  (JNIEnv *, jobject, jshort);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    AIS_Plane_SetColor_2
 * Signature: (LjjAIS/Quantity_Color;)V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetColor_12
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jjAIS_AIS_Plane
 * Method:    UnsetColor
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_UnsetColor
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
