#include "Pairs.h"

void Pairs::setA(int x1, int y1) {
    A.setX(x1);
    A.setY(y1);
};

void Pairs::setB(int x1, int y1) {
    B.setX(x1);
    B.setY(y1);
};

void Pairs::print(){
    cout << "A: (" <<A.getX() << ", " <<A.getY() << ")" << endl;
    cout << "B: (" <<B.getX() << ", " <<B.getY() << ")" << endl;
};

