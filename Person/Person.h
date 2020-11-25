#ifndef __PERSON_H__
#define __PERSON_H_
#include <iostream>
using namespace std;

class Person {
private:
    int age;
public:
    Person(int);
    ~Person();
    void GetAge();
};

void Test01();
void Test02();

#endif
