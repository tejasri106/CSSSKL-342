#ifndef SUPERSUPERINT_H
#define SUPERSUPERINT_H

#include "SuperInt.h"

class SuperSuperInt : public SuperInt {
public:
    SuperSuperInt(int init, const char* name);
    const int& theValue(void); 
};

#endif