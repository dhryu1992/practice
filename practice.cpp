#include <iostream>
using namespace std;

class Person
{
private:
    int age;
public:
    Person(int age)
    {
        this->age = age;
        cout << "생성자 호출 / 나이 :" << age << endl;
    }
    ~Person()
    {
        cout << "소멸자 호출" << endl;
    }
    void GetAge()
    {
        cout << "나이는 : " << age << "입니다." << endl;
    }
};
 
 
void Test01()
{
    // 해당 함수 내에서만 메모리 유지
    Person person01(15);
    person01.GetAge();
};

void Test02()
{
    // 클래스 동적 할당 : delete 하기 전까지 계속 메모리 유지
    Person *person02 = new Person(30);
    person02->GetAge();
    //delete person02;
};
 
 
 
int main(){
 
    Test01();
 
    Test02();
 
    return 0;
}
