//overload : 다중 정의.

#include <iostream>

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(double &a, double &b) {
    double tmp = a;
    a = b;
    b = tmp;
}

void swap(int*(&a), int*(&b)) { // int*(&a) -> a는 refence 변수인데 int형 포인터를 가리키는 refence 변수
    int *tmp = a;
    a = b;
    b = tmp;
} 

int main() {
    int a = 20, b = 30;
    double da = 2.222, db = 3.3333;
    int *pa = &a, *pb = &b;
    swap(a, b);
    swap(da, db);
    swap(pa, pb);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::cout << "da: " << da << std::endl;
    std::cout << "pb: " << db << std::endl;

    std::cout << "pa : " << *pa << std::endl;
    std::cout << "pb : " << *pb << std::endl;
}
