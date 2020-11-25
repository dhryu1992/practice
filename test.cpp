#include <iostream>
#include <string>
using namespace std;

int main() {
	char My_Name[20];
	cout << "Enter your name: " << endl;
	cin >> My_Name;
	cout << "Name: " << My_Name << endl;
	cout << "sizeof(My_Name) : " << sizeof(My_Name) << endl;
}
