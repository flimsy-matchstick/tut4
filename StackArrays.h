#ifndef STACKARRAY_H
#define STACKARRAY_H

#include <iostream>
#include "defs.h"
#include "Episode.h"

using namespace std;

class StackArrays {
    private:
        Episode epiObjects[];
        Episode epiPointers[];

    public:
        stackArrays();
        ~stackArrays();
        getObjectArray();
        getPointerArray();
};

#endif