#include <iostream>

using namespace std;

int main() {
    int a(5);
    int &b = a; //b는 a를 가리키고 있다.
    int &c = 3; // 오류 3은 메모리안에 저장되어 있는게 아니니까. 말이안되는것.
    int &d = a * a;//이것도 메모리에 저장된것이 아니기에 이게 안돼요 근데!!
    //r-value 라는게 2011년에 C++에 추가가됨. r-value 는 수정할 수 없는 값. 수정할 수 있는건 l-value
    //
}
