// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_MapOfInteger_HeaderFile
#define _TColStd_MapOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_StdMapNodeOfMapOfInteger_HeaderFile
#include <Handle_TColStd_StdMapNodeOfMapOfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class TColStd_MapIntegerHasher;
class TColStd_StdMapNodeOfMapOfInteger;
class TColStd_MapIteratorOfMapOfInteger;



class TColStd_MapOfInteger  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   TColStd_MapOfInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TColStd_MapOfInteger& Assign(const TColStd_MapOfInteger& Other) ;
    TColStd_MapOfInteger& operator =(const TColStd_MapOfInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TColStd_MapOfInteger()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Standard_Integer& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_Integer& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Standard_Integer& aKey) ;





protected:





private:

  
  Standard_EXPORT   TColStd_MapOfInteger(const TColStd_MapOfInteger& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif