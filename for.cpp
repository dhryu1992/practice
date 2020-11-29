#include <iostream>

#include <iostream>

using namespace std;

int main() {
    int arr[10] = {3, 1, 4, 1,5, 9, 2, 6, 5, 3};

    for(int &n : arr) { //n은 배열안의 각 칸.
        cout << n << ' ';
        n++;
    }//n은 정수의 값이라고 치부. for문 안에서만 돈다. n++ 해도 for문 밖으로 나오면 반영되지 않는다. but &를 붙히면(refence 변수) 변화가 가능하다
    cout << endl;
    for(int n : arr) {
        cout << n << ' ';
    }
    cout << endl;
}
