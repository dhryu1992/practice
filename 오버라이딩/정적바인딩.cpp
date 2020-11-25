// 1. override: 우선하다
// 2. overload
// 3. overwrite: 덮어쓰다
#include <iostream>

using namespace std;

class Base {
    public:
        void Print() {
            cout << "From Base!!" << endl;
        }
};

class Derived : public Base {
    public:
        void Print() {
            cout << "From Derived!!" << endl;
        }
};

//Derived d; //총각
//Base *b = &d; //반환형이 달라도 c++에서는 부모클래스의 포인터가 자식도 가리킬 수 있다. // 남자

/*Derived d;
Base b;
Base *p = &b;//가능.
Base *p = &d; // 부모를 가리키는 포인터는 자식을 가리켜도된다.
*/

class Derived2 : public Base {
        
};

int main() {
    Base *b = new Derived(); // Derived 타입의 객체를 동적할당 후 그 포인터를 b에 저장하라.
    // b는 Base를 가리키는 포인터. 동적할당이 된 Derived 객체를 가리키고 있다.
    b->Print(); //Base Print()가 출력됨. Derived가 아님.
    delete b;
    b = new Derived2; //Derived2 에는 print함수가 없다. 이런 경우가 있으니까 그냥 Base의 Print()를 호출한다 -> 정적바인딩
    b->Print();
}

//c++ 은 어떤 조치를 취하지 않으면 위같은 상황에서 기본적으로 정적바인딩이 일어난다. Base 포인터로 다른 클래스 객체를 가리키고 있을 때에도(오버라이딩이 된 케이스라도) b라는 포인터가 지금 가리키고 있는게 뭔지 모호하니까 그걸 알아내는 과정을 거치지않고 b라는 애는 Base를 가리키고 있다고 가정한다.
