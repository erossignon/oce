// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <jjAIS_TopoDS_Face.h>
#include <TopoDS_Face.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>



extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_TopoDS_1Face_FinalizeValue(JNIEnv *, jclass, jlong theid)
{
if (theid) {
  TopoDS_Face* theobj = (TopoDS_Face*) theid;
  delete theobj;
}
}


}
