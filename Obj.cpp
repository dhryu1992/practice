#include "Obj.h"

Obj::Obj() {
    cout << "complete to make Obj obj" << endl;
    derived = NULL;
}

Obj::~Obj() {
    cout << "your Obj obj is Terminated" << endl;
}

void Obj::Link(Derived *selectderived) {
        derived = selectderived;
        cout << "derived is connected with Derived obj!" << endl;
}

void Obj::ShowData() {
    cout << "B obj! " << endl;
}

void Obj::ShowDataA() {
    derived -> ShowData();
}
