#include<iostream>
using namespace std;

class Base1 {
public:
     void doSomething() {
        cout << "Hello Base1" << endl;
    }
};

class Base2:public Base1{
public:
     void doSomething() {
        cout << "Hello Base2" << endl;
    }
};

class Derived1 :public Base2{
public:
    virtual void doSomething() {
        cout << "Hello Base1" << endl;
        cout << "Hello Base2" << endl;
        cout << "Hi Derived1" << endl;
    }
};

class Derived2 :public Base1 {
public:
    virtual void doSomething() {
        cout << "Hello Base1" << endl;
        cout << "Hi Derived2" << endl;
    }
};

int main() {
	Base1 b1;
	Base2 b2;
	Derived1 d1;
	Derived2 d2;
	Base1* bp;
	bp = &b2;
	bp->doSomething();  //(1)
	cout << endl;

	bp = &d1;
	bp->doSomething();  //(2)
	cout << endl;

	bp = &d2;
	bp->doSomething();   //(3)
	cout << endl;

	Base2& br = d1;
	br.doSomething();   //(4)
	cout << endl;

	d1.doSomething();   //(5)
	cout << endl;

	d2.doSomething();   //(6)
	return 0;
}