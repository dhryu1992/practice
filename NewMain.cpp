#include "new.h"

int main() {

    New *aaa = new New;
    int a = 20;
    int *ptr;
    ptr = &a;
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&ptr: " << &ptr << endl;

}
