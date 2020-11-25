#include "Derived.h"
#include "Obj.h"
using namespace std;

int main() {
    Derived derived;
    Obj obj;

    obj.Link(&derived);
    obj.ShowData();
    obj.ShowDataA();
    return 0;

    
}
