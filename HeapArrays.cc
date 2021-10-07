
#include "HeapArrays.h"

HeapArrays::HeapArrays(){
    episodeObjects = new Episode[ARR_SIZE];
    // for (int i=0; i<ARR_SIZE; i++) {
    //     episodeObjects[i];
    // }
    episodePointers = new Episode*[ARR_SIZE];
    // for (int k=0; k<ARR_SIZE; k++) {
    //     episodePointers[k];
    // }
}

HeapArrays::~HeapArrays(){
    delete episodeObjects;
    delete episodePointers;
}

Episode *getObjectArray(){
    // if (i < 0 || i > ARR_SIZE)
    //     cout << "Array out of bounds" << endl;
    return episodeObjects;
}

Episode **getPointerArray() {
    // if (k < 0 || k > ARR_SIZE)
    //     cout << "Array out of bounds" << endl;
    return episodePointers;
}