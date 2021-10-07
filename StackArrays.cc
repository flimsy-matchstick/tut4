
#include "StackArrays.h"

StackArrays::stackArrays(){    
    // epiPointers * epiObjects = new epiPointers[num_epi];
    // for (int i=0; i<ARR_SIZE; ++i) {
    //     epiObjects[i] = new StackArray();
    // }
    epiObjects = new Episode[ARR_SIZE];
    epiPointers = new Episode*[ARR_SIZE];
}

StackArrays::~stackArrays(){
    delete[] epiObjects;
    delete[] epiPointers;
}

StackArrays::getObjectArray(){
    return epiObjects;
}

StackArrays::getPointerArray() {
    return epiPointers;
}