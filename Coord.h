#ifndef __COORDH_H__
#define __COORDH_H__
#include <iostream>
using namespace std;

class Coord {
    private:
        int x, y;
    public:
        void set(int, int);
        void setX(int);
        void setY(int);
        int getX();
        int getY();
};

#endif
