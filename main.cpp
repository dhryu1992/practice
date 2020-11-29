#include <iostream>
#include "Pairs.h"
using namespace std;

int main(){
    Coord P;
    P.set(-1, -2);
    cout << "P: (" << P.getX() << ", " << P.getY() << ")" << endl;

    Pairs Two;
    Two.setA(5, 3);
    Two.setB(0, 10);
    Two.print();

    return 0;
};

