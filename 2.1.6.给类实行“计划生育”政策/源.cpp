#include<iostream>
using namespace std;

class A {
private:
    string Name;
protected:
    A(string name) {
        Name = name;
    }
	A() {

	}
public:
	static A *GetObject(string name) {
		static A* a =NULL;
		if (!a) {
			a = new A(name);
		}
		return a;
	}

	 void Print() {
		cout << Name<<endl;
	}
};

int main() {
	string name1, name2;
	cin >> name1;
	cin >> name2;

	A* o1 = A::GetObject(name1);
	o1->Print();
	A* o2 = A::GetObject(name2);
	o2->Print();
	if (o1 == o2)
	{
		cout << "o1与o2指向的是同一个对象！" << endl;
	}

	delete o1;

	return 0;
}