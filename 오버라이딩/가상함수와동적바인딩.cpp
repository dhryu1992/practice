#include <iostream>

using namespace std;

class Weapon {
public:
    Weapon(int power) : power(power) {
        cout << "Weapon(int)" << endl;
    }

    virtual void Use() {    //가상함수: currenWeapon이 처음에는 부모클래스를 가리키고 있다.자식클래스를 가리키고 있다고 하더라도 currentWeapon은 부모클래스를 가리키게된다(정적바인딩). 근데 virtual이 나오면, 가상의 함수 Use()가 호출이 될 수도 있고, 안될수도 있음. -> 프로그램을 만드는 시점에선 알 수 없으니까 프로그램이 실행되는 시점에서 결정하게끔 한다.(동적바인딩)
        cout << "Weapon:Use()" << endl;
    }

protected:
    int power;
};

class Sword : public Weapon {
    public:
        Sword(int power) : Weapon(power) {
            cout << "Sword(int)" << endl;
        }

        void Use() {
            cout << "Sword::Use()" << endl;
            Swing();
        }

    private:
        void Swing() {
            cout << "Swing sword!" << endl;
        }
};

class Magic: public Weapon {
    public:
        Magic(int power, int manaCost) : Weapon(power), manaCost(manaCost) {
            cout << "Magic(int, int)" << endl;
        }

        void Use() {
            cout << "Magic::Use()" << endl;
            Cast();
        }

    private:
        void Cast() {
            cout << "Cast Magic." << endl;
        }

        int manaCost;
};

int main() {
    Sword mySword(10);
    Magic myMagic(15, 7);

    mySword.Use();
    myMagic.Use();

    Weapon *currentWeapon; // currentWeapon은 Weapon과 Sword와 Magic을 전부 가리킬 수 있다.

    currentWeapon = &mySword; // currentWeapon이 mySword를 가리키도록 설정. 이 시점에 currentWeapon이 mySword를 가리키고 있다는걸 컴파일러가 인지하게 됨.
    currentWeapon->Use();// 조치없이 이렇게 빌드하면 정적바인딩(Weapon의 Use()호출)이 발생. mySword를 가리키고 있는 포인터라 mySword 클래스 안의 Use()를 호출하게 하는게 목표. 따라서 Use() 앞에 virtual을 붙힘. 동적바인딩!
    currentWeapon = &myMagic;// 여기서 mySword를 가리키던 currentWeapon이 myMagic을 가리키게됨.
    currentWeapon->Use();//myMagic을 가리키고 있으므로 myMagic의 Use()를 호출하게 됨.
}

//
