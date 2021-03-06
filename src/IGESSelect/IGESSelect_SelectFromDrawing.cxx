// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

#include <IGESSelect_SelectFromDrawing.ixx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_Macros.hxx>

#define PourDrawing 404


IGESSelect_SelectFromDrawing::IGESSelect_SelectFromDrawing ()    {  }


    Interface_EntityIterator  IGESSelect_SelectFromDrawing::RootResult
  (const Interface_Graph& G) const
{
  Interface_EntityIterator list, views;
  Interface_EntityIterator draws = InputResult(G);
  if (draws.NbEntities() == 0) return list;
  Standard_Integer nb = G.Size();
  Standard_Integer i; // svv Jan11 2000 : porting on DEC

//  Pour chaque Drawing : prendre d une part l integralite de son contenu,
//  (c-a-d avec le "Frame"), d autre part les entites attachees a ses vues
  for (draws.Start(); draws.More(); draws.Next()) {
    DeclareAndCast(IGESData_IGESEntity,igesent,draws.Value());
    if (igesent.IsNull()) continue;
    if (igesent->TypeNumber() != PourDrawing) continue;
    list.GetOneItem (igesent);
    Interface_EntityIterator someviews = G.Shareds (draws.Value());
    list.AddList (someviews.Content());
  }
  for (i = 1; i <= nb; i ++) {
//    if (!G.IsPresent(i)) continue;
    DeclareAndCast(IGESData_IGESEntity,igesent,G.Entity(i));
    if (igesent.IsNull()) continue;
    Standard_Integer nv = G.EntityNumber (igesent->View());
    if (nv > 0 && nv <= nb) list.GetOneItem(igesent);
  }
  return list;
}


    TCollection_AsciiString  IGESSelect_SelectFromDrawing::Label () const
{  return TCollection_AsciiString ("Entities attached to a Drawing");  }
