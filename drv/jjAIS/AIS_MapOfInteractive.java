// This file is generated by WOK (CPPJini).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.


package jjAIS;

import jjAIS.TCollection_BasicMap;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.AIS_InteractiveObject;


public class AIS_MapOfInteractive extends jjAIS.TCollection_BasicMap {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_MapOfInteractive(int NbBuckets) {
   AIS_MapOfInteractive_Create_1(NbBuckets);
}

private final native void AIS_MapOfInteractive_Create_1(int NbBuckets);

native public final AIS_MapOfInteractive Assign(AIS_MapOfInteractive Other);
native public final void ReSize(int NbBuckets);
native public final void Clear();
native public final boolean Add(AIS_InteractiveObject aKey);
native public final boolean Contains(AIS_InteractiveObject aKey);
native public final boolean Remove(AIS_InteractiveObject aKey);
public AIS_MapOfInteractive() {
}



public native static void FinalizeValue(long anHID);

public void finalize() {
   synchronized(myCasLock) {
     if ( aVirer != 0 ) FinalizeValue(HID);
     HID = 0;
   }
}

}
