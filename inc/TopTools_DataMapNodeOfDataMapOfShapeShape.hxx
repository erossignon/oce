// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapNodeOfDataMapOfShapeShape_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeShape_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeShape.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeShape;
class TopTools_DataMapIteratorOfDataMapOfShapeShape;



class TopTools_DataMapNodeOfDataMapOfShapeShape : public TCollection_MapNode {

public:

  
      TopTools_DataMapNodeOfDataMapOfShapeShape(const TopoDS_Shape& K,const TopoDS_Shape& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        TopoDS_Shape& Value() const;




  DEFINE_STANDARD_RTTI(TopTools_DataMapNodeOfDataMapOfShapeShape)

protected:




private: 


TopoDS_Shape myKey;
TopoDS_Shape myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopoDS_Shape
#define TheItem_hxx <TopoDS_Shape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopTools_DataMapNodeOfDataMapOfShapeShape
#define TCollection_DataMapNode_hxx <TopTools_DataMapNodeOfDataMapOfShapeShape.hxx>
#define TCollection_DataMapIterator TopTools_DataMapIteratorOfDataMapOfShapeShape
#define TCollection_DataMapIterator_hxx <TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#define Handle_TCollection_DataMapNode Handle_TopTools_DataMapNodeOfDataMapOfShapeShape
#define TCollection_DataMapNode_Type_() TopTools_DataMapNodeOfDataMapOfShapeShape_Type_()
#define TCollection_DataMap TopTools_DataMapOfShapeShape
#define TCollection_DataMap_hxx <TopTools_DataMapOfShapeShape.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
