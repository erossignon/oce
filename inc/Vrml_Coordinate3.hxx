// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Coordinate3_HeaderFile
#define _Vrml_Coordinate3_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Vrml_Coordinate3_HeaderFile
#include <Handle_Vrml_Coordinate3.hxx>
#endif

#ifndef _Handle_TColgp_HArray1OfVec_HeaderFile
#include <Handle_TColgp_HArray1OfVec.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TColgp_HArray1OfVec;


//! defines a Coordinate3 node of VRML specifying <br>
//!          properties of geometry and its appearance. <br>
//!  This node defines a set of 3D coordinates to be used by a subsequent IndexedFaceSet, <br>
//!  IndexedLineSet, or PointSet node. This node does not produce a visible result <br>
//!  during rendering; it simply replaces the current coordinates in the rendering <br>
//!  state for subsequent nodes to use. <br>
class Vrml_Coordinate3 : public MMgt_TShared {

public:

  
  Standard_EXPORT   Vrml_Coordinate3(const Handle(TColgp_HArray1OfVec)& aPoint);
  
  Standard_EXPORT   Vrml_Coordinate3();
  
  Standard_EXPORT     void SetPoint(const Handle(TColgp_HArray1OfVec)& aPoint) ;
  
  Standard_EXPORT     Handle_TColgp_HArray1OfVec Point() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;




  DEFINE_STANDARD_RTTI(Vrml_Coordinate3)

protected:




private: 


Handle_TColgp_HArray1OfVec myPoint;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
