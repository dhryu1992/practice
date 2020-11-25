// 1. override: 우선하다
// 2. overload
// 3. overwrite: 덮어쓰다
#include <iostream>

using namespace std;

class Base {
    public:
        int a = 10; // == Base() : a(10) {} -> 생성자가 호출될 때 멤버변수까지 초기화됨.
        void Print() {
            cout << "From Base!!" << endl;
        }
};

class Derived : public Base {
    public:
        int a = 20;
        void Print() {
            cout << "From Derived!!" << endl;
        }
};

int main() {
    Base b;
    Derived d;

    d.Print();
    d.Base::Print();
    d.Derived::Print();
}
