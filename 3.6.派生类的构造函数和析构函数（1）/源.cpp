#include<iostream>
using namespace std;


class Base1 {
	int id;
public:
	Base1(int id) :id(id) {
		cout << "Base1 Constructed,ID:" << id << endl;
	}
	~Base1() {
		cout << "Base1 Destructed,ID:" << id << endl;
	}
};

class Base2 {
	int id;
public:
	Base2(int id) :id(id) {
		cout << "Base2 Constructed,ID:" << id << endl;
	}
	~Base2() {
		cout << "Base2 Destructed,ID:" << id << endl;
	}
};

class Base3 {
	int id;
public:
	Base3(int id) :id(id) {
		cout << "Base3 Constructed,ID:" << id << endl;
	}
	~Base3() {
		cout << "Base3 Destructed,ID:" << id << endl;
	}
};


class Derived:public Base3,public Base1,public Base2{
private:
	int id;
	Base2 base2;
	Base1 base1;
	Base3 base3;
public:
	Derived(int id1, int id2, int id3, int id4, int id5, int id6, int id7) :Base3(id6),Base1(id4),Base2(id5),base2(id2),base1(id1),base3(id3) ,id(id7){
		cout << "Derived Constructed,ID:" << id << endl;
	}
	~Derived() {
		cout << "Derived Destructed,ID:" << id<<endl;
	}
};

int main() {
	int id1, id2, id3, id4, id5, id6, id7;
	cin >> id1 >> id2 >> id3 >> id4 >> id5 >> id6 >> id7;
	Derived d(id1, id2, id3, id4, id5, id6, id7);
	return 0;
}