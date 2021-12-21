#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A's constructor is called!" << endl;
    }
    ~A() {
        cout << "A's destructor is called!" << endl;
    }
};

class B {
public:
    B() {
        cout << "B's constructor is called!" << endl;
    }
    ~B() {
        cout << "B's destructor is called!" << endl;
    }
};

class C {
public:
    C() {
        cout << "C's constructor is called!" << endl;
    }
    ~C() {
        cout << "C's destructor is called!" << endl;
    }
};

class D {
private:
    B b;
    C c;
    A a;
public:
    D() {
        cout << "D's constructor is called!" << endl;
    }
    ~D() {
        cout << "D's destructor is called!" << endl;
    }
};

int main() {
    D d;
    return 0;
}