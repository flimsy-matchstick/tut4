#ifndef HEAPARRAYS_H
#define HEAPARRAYS_H

#include <iostream>
#include "defs.h"
#include "Episode.h"

using namespace std;

class HeapArrays {
    private:
        Episode *episodeObjects;
        Episode **episodePointers;

    public:
        HeapArrays();
        ~HeapArrays();
        Episode *getObjectArray();
        Episode **getPointerArray();
};

#endif