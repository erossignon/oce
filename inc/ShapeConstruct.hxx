// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeConstruct_HeaderFile
#define _ShapeConstruct_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class Geom_BSplineCurve;
class Geom_Curve;
class Geom2d_BSplineCurve;
class Geom2d_Curve;
class Geom_BSplineSurface;
class Geom_Surface;
class TopTools_HSequenceOfShape;
class TopoDS_Face;
class TopoDS_Edge;
class ShapeConstruct_Curve;
class ShapeConstruct_ProjectCurveOnSurface;
class ShapeConstruct_CompBezierCurvesToBSplineCurve;
class ShapeConstruct_CompBezierCurves2dToBSplineCurve2d;
class ShapeConstruct_MakeTriangulation;


//! This package provides new algorithms for constructing <br>
//! new geometrical objects and topological shapes. It <br>
//! complements and extends algorithms available in Open <br>
//! CASCADE topological and geometrical toolkist. <br>
//! The functionality provided by this package are the <br>
//! following: <br>
//!    projecting curves on surface, <br>
//!      adjusting curve to have given start and end points. P <br>
class ShapeConstruct  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Handle_Geom_BSplineCurve ConvertCurveToBSpline(const Handle(Geom_Curve)& C3D,const Standard_Real First,const Standard_Real Last,const Standard_Real Tol3d,const GeomAbs_Shape Continuity,const Standard_Integer MaxSegments,const Standard_Integer MaxDegree) ;
  
  Standard_EXPORT   static  Handle_Geom2d_BSplineCurve ConvertCurveToBSpline(const Handle(Geom2d_Curve)& C2D,const Standard_Real First,const Standard_Real Last,const Standard_Real Tol2d,const GeomAbs_Shape Continuity,const Standard_Integer MaxSegments,const Standard_Integer MaxDegree) ;
  
  Standard_EXPORT   static  Handle_Geom_BSplineSurface ConvertSurfaceToBSpline(const Handle(Geom_Surface)& surf,const Standard_Real UF,const Standard_Real UL,const Standard_Real VF,const Standard_Real VL,const Standard_Real Tol3d,const GeomAbs_Shape Continuity,const Standard_Integer MaxSegments,const Standard_Integer MaxDegree) ;
  //! join pcurves of the <theEdge> on the <theFace> <br>
//!    	    try to use pcurves from originas edges <theEdges> <br>
//!          Returns false if cannot join pcurves <br>
  Standard_EXPORT   static  Standard_Boolean JoinPCurves(const Handle(TopTools_HSequenceOfShape)& theEdges,const TopoDS_Face& theFace,TopoDS_Edge& theEdge) ;
  //!Method for joininig curves 3D. <br>
//!          Parameters : c3d1,ac3d2 - initial curves <br>
//!	                     Orient1, Orient2 - initial edges orientations. <br>
//!                       first1,last1,first2,last2 - parameters for trimming curves <br>
//!	    	             (re-calculate with account of orientation edges) <br>
//!                       c3dOut - result curve <br>
//!                       isRev1,isRev2 - out parameters indicative on possible errors. <br>
//!          Return value : True - if curves were joined successfully, <br>
//!                               else - False. <br>
  Standard_EXPORT   static  Standard_Boolean JoinCurves(const Handle(Geom_Curve)& c3d1,const Handle(Geom_Curve)& ac3d2,const TopAbs_Orientation Orient1,const TopAbs_Orientation Orient2,Standard_Real& first1,Standard_Real& last1,Standard_Real& first2,Standard_Real& last2,Handle(Geom_Curve)& c3dOut,Standard_Boolean& isRev1,Standard_Boolean& isRev2) ;
  //!Method for joininig curves 3D. <br>
//!          Parameters : c3d1,ac3d2 - initial curves <br>
//!	                     Orient1, Orient2 - initial edges orientations. <br>
//!                       first1,last1,first2,last2 - parameters for trimming curves <br>
//!	    	             (re-calculate with account of orientation edges) <br>
//!                       c3dOut - result curve <br>
//!                       isRev1,isRev2 - out parameters indicative on possible errors. <br>
//!                       isError - input parameter indicative possible errors due to that one from edges have one vertex <br>
//!         Return value : True - if curves were joined successfully, <br>
//!                               else - False. <br>
  Standard_EXPORT   static  Standard_Boolean JoinCurves(const Handle(Geom2d_Curve)& c2d1,const Handle(Geom2d_Curve)& ac2d2,const TopAbs_Orientation Orient1,const TopAbs_Orientation Orient2,Standard_Real& first1,Standard_Real& last1,Standard_Real& first2,Standard_Real& last2,Handle(Geom2d_Curve)& c2dOut,Standard_Boolean& isRev1,Standard_Boolean& isRev2,const Standard_Boolean isError = Standard_False) ;





protected:





private:




friend class ShapeConstruct_Curve;
friend class ShapeConstruct_ProjectCurveOnSurface;
friend class ShapeConstruct_CompBezierCurvesToBSplineCurve;
friend class ShapeConstruct_CompBezierCurves2dToBSplineCurve2d;
friend class ShapeConstruct_MakeTriangulation;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
