#include "MySubClass.h"
#include <iostream>
using namespace std;



MySubClass::MySubClass(const MySubClass& other)
    : MyClass(other)  
{
    subClassData = other.subClassData;
}

MySubClass& MySubClass::operator=(const MySubClass& rhs)
{
    if (this != &rhs) {
        MyClass::operator=(rhs); 
        subClassData = rhs.subClassData;
    }
    return *this;
}