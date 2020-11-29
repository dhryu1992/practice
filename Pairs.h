#ifndef __PAIRS_H__
#define __PAIRS_H__
#include <iostream>
#include "Coord.h"
using namespace std;

class Pairs {
    private:
        Coord A, B;
    public:
        void setA(int, int);
        void setB(int, int);
        void print();
};

#endif
