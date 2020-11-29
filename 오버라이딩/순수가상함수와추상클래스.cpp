#include <iostream>

using namespace std;

class A {
public:
    virtual void f() = 0; // 0 대신 NULL을 써줘도 됨. => 순수 가상함수
};

class B : public A{
public:
    void f() {
        cout << "B::f()" << endl;
    }    
};

int main () {
    A *a = new A;
    a->f();
    delete a;
}

// 여기까지 동적바인딩
