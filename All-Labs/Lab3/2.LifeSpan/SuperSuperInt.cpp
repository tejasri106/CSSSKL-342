#include "SuperSuperInt.h"
#include <iostream>
using namespace std;

SuperSuperInt::SuperSuperInt(int init, const char* name): SuperInt(init, name)
{
    cout << "Created a SuperSuperInt called " << name << endl;
}

const int& SuperSuperInt::theValue()
{
    cout << "Getting value (read-only) of SuperSuperInt" << endl;
    return SuperInt::theValue(); 
}
