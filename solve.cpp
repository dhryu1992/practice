/*
 * 1. 이름과 점수를 입력받고, 다음과 같이 추력되는 프로그램을 작성해보세요.
 * 이름입력: 두들낙서
 * 점수입력: 80
 * 두득날서님의 점수는 80점입니다.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int score;
    cout << "이름을 입력하세요" << endl;
    cin >> name;
    cout << "점수는?" << endl;
    cin >> score;
    cout << name << "의 점수는 " << score << "점입니다." << endl;
}
