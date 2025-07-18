#include<iostream>
using namespace std;
class Base {
public:
    void show() { cout << "Base\n"; }
};

class Derived : public Base {
public:
    void yshow() { cout << "Derived\n"; }
};

int main() {
    Derived d;
    d.show();
    d.yshow();
    return 0;
}
