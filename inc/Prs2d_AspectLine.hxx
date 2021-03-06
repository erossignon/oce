// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_AspectLine_HeaderFile
#define _Prs2d_AspectLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_AspectLine_HeaderFile
#include <Handle_Prs2d_AspectLine.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Aspect_WidthOfLine_HeaderFile
#include <Aspect_WidthOfLine.hxx>
#endif
#ifndef _Graphic2d_TypeOfPolygonFilling_HeaderFile
#include <Graphic2d_TypeOfPolygonFilling.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Prs2d_AspectRoot_HeaderFile
#include <Prs2d_AspectRoot.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class Quantity_Color;


//! defines the attributes when drawing a line presentation <br>
class Prs2d_AspectLine : public Prs2d_AspectRoot {

public:

  //! default constructor <br>
  Standard_EXPORT   Prs2d_AspectLine();
  //! Initializes the AspectLine defined values <br>
  Standard_EXPORT   Prs2d_AspectLine(const Quantity_NameOfColor aColor,const Aspect_TypeOfLine aType,const Aspect_WidthOfLine aWidth,const Quantity_NameOfColor aInterColor = Quantity_NOC_YELLOW,const Graphic2d_TypeOfPolygonFilling aTypeFill = Graphic2d_TOPF_EMPTY,const Standard_Integer aTiled = 0,const Standard_Boolean aDrawEdge = Standard_True);
  //! Initializes the AspectLine defined values <br>
  Standard_EXPORT   Prs2d_AspectLine(const Quantity_Color& aColor,const Aspect_TypeOfLine aType,const Aspect_WidthOfLine aWidth,const Quantity_Color& aInterColor,const Graphic2d_TypeOfPolygonFilling aTypeFill = Graphic2d_TOPF_EMPTY,const Standard_Integer aTileInd = 0,const Standard_Boolean aDrawEdge = Standard_True);
  //! Modifies the Aspect by redefining a color <br>
  Standard_EXPORT     void SetColor(const Quantity_NameOfColor aColor) ;
  //! Modifies the Aspect by redefining a color <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& aColor) ;
  //! Modifies the Aspect by redefining a type of line <br>
  Standard_EXPORT     void SetType(const Aspect_TypeOfLine aType) ;
  //! Modifies the Aspect by redefining a width of line <br>
  Standard_EXPORT     void SetWidth(const Aspect_WidthOfLine aWidth) ;
  //! Modifies the Aspect by redefining a interior color <br>
  Standard_EXPORT     void SetInterColor(const Quantity_NameOfColor aColor) ;
  //! Modifies the Aspect by redefining a interior color <br>
  Standard_EXPORT     void SetInterColor(const Quantity_Color& aColor) ;
  //! Modifies the Aspect Polygon by redefining its type of polygon filling <br>
  Standard_EXPORT     void SetTypeOfFill(const Graphic2d_TypeOfPolygonFilling aType) ;
  //! Sets the tile of the Aspect Polygon <br>
  Standard_EXPORT     void SetTile(const Standard_Integer aTile) ;
  //! Sets the flag <aDrawEdge> <br>
  Standard_EXPORT     void SetDrawEdge(const Standard_Boolean aDrawEdge) ;
  //! Return the current values of this line <br>
  Standard_EXPORT     void ValuesOfLine(Quantity_Color& aColor,Aspect_TypeOfLine& aType,Aspect_WidthOfLine& aWidth) const;
  //! Returns the current values of this closed line <br>
  Standard_EXPORT     void ValuesOfPoly(Quantity_Color& aColor,Graphic2d_TypeOfPolygonFilling& aTypeFill,Standard_Integer& aTile,Standard_Boolean& aDrawEdge) const;
  //! Returns current color index according to the color aspect <br>
  Standard_EXPORT     Standard_Integer ColorIndex() const;
  //! Returns current type index according to the type aspect <br>
  Standard_EXPORT     Standard_Integer TypeIndex() const;
  //! Returns current width index according to the width aspect <br>
  Standard_EXPORT     Standard_Integer WidthIndex() const;
  //! Returns current color index according to the color aspect <br>
  Standard_EXPORT     Standard_Integer InterColorIndex() const;
  //! Sets current color index according to the color aspect <br>
  Standard_EXPORT     void SetColorIndex(const Standard_Integer anInd) ;
  //! Sets current type index according to the type aspect <br>
  Standard_EXPORT     void SetTypeIndex(const Standard_Integer anInd) ;
  //! Sets current width index according to the width aspect <br>
  Standard_EXPORT     void SetWidthIndex(const Standard_Integer anInd) ;
  //! Sets current color index according to the color aspect <br>
  Standard_EXPORT     void SetIntColorInd(const Standard_Integer anInd) ;




  DEFINE_STANDARD_RTTI(Prs2d_AspectLine)

protected:




private: 


Quantity_Color myColor;
Aspect_TypeOfLine myType;
Aspect_WidthOfLine myWidth;
Quantity_Color myInterColor;
Graphic2d_TypeOfPolygonFilling myFillType;
Standard_Integer myTile;
Standard_Boolean myDrawEdge;
Standard_Integer myColorIndex;
Standard_Integer myTypeIndex;
Standard_Integer myWidthIndex;
Standard_Integer myIntColorInd;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
