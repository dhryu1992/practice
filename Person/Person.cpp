#include "Person.h"

Person::Person(int age) {
    this -> age = age;
    cout << "생성자 호출 / 나이 : " << age << endl;
}

Person::~Person() {

}

void Person::GetAge() {
    cout << "나이는: " << age << "입니다." << endl;
};

void Test01() {
    Person person01(15);
    person01.GetAge();
};

void Test02() {
    Person *person02 = new Person(30);
    person02->GetAge();
};
