#include <iostream>
#include <string> 
 
using namespace std;

int main() { 
    cout << "Enter your full name: "; 
    string *my_Name = new string("My_Name");
    cin >> *my_Name; // this won't work as expected since std::cin breaks on whitespace 
    cout << "Enter your age: "; 
    int age; 
    cin >> age; 
    cout << "Your name is " << *my_Name << " and your age is " << age << endl; 
    cout << "length of My_Name: " << my_Name->length() << endl;
}

