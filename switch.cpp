//switch
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "New Game: 1" << endl;
    cout << "Load: 2" << endl;
    cout << "Setting: 3" << endl;
    cout << "Credit: 4" << endl;
    cout << "Choose what you want" << endl;

    cin >> choice;

    if(choice == 1) {
        cout << "New Game" << endl;
    }else if (choice == 2) {
        cout << "Load" << endl;
    }else if (choice == 3) {
        cout << "Setting" << endl;
    }else if (choice ==4) {
        cout << "Credit" << endl;
    }else {
        cout << "Wrong Choice!" << endl;
    }
}
