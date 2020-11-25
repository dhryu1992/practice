#include <iostream>

using namespace std;

Class A {
public:
    void f() {

    }
};

Class B : public A{
public:
    void f() {

    }
};

int main() {
    A *a = New B;
    a->f();
    delete a;
}
