#ifndef __OBJ_H__
#define __OBJ_H__
#include <iostream>
#include "Derived.h"
using namespace std;

class Obj {
    private:
        Derived *derived;
    public:
        Obj();
        ~Obj();
        void Link(Derived*);
        void ShowData();
        void ShowDataA();
};

#endif
