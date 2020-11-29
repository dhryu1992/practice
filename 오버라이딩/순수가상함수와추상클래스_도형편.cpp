#include <iostream>

using namespace std;

const double PI = 3.141592;

class Shape { // 추상클래스 -> 이 클래스의 객체는 생성 불가
public:
    virtual double GetArea() = 0;
    virtual void Resize(double f) = 0;
};

class Circle : public Shape {
    public:
        double GetArea() {
            return PI * r * r;
        }

        void Resize(double f) {
            r *= f;
        }

        Circle(double r) : r(r) {

        }

    private:
        double r;
};

class Rectangle :public Shape {
    public:
        Rectangle(double a, double b) : a(a), b(b) {
            
        }

        double GetArea() {
            return a * b;
        }

        void Resize(double f) {
            a *= f;
            b *= f;
        }

    private:
        double a, b;
};

int main() {
    Shape *shapes[] = {
        new Circle(10),
        new Rectangle(20, 30)
    };

    //cout << s[0]->GetArea() << endl;
    //s[0]->Resize();//이 경우에 부모클래스가 필요한데 지금 부모클래스 자체가 어떤 구체적인 대상을 담고있는 역할을 할 수 없음. 이럴 때 순수가상함수가 효과가 나타남. Shape를 순수가상함수로 만들지 않으면 *s배열 안에 Shape같은걸 넣어서 실수가 날 수 있기 때문.

    for(Shape *s : shapes) {
        s->Resize(2);
    }
    
    for(Shape *s : shapes) {
        cout << s->GetArea() << endl;    
    }

    for(Shape *s : shapes) {
        delete s;
    }
}
