#ifndef MYSUBCLASS_H
#define MYSUBCLASS_H

#include "MyClass.h"

class MySubClass : public MyClass {
    private:
        int subClassData;
    public:
        MySubClass(const MySubClass& other);
        MySubClass& operator=(const MySubClass& rhs);





};

#endif;