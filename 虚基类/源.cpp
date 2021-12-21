#include<iostream>
using namespace std;

class Father {
public:
    string name;
    Father(string name) {
        this->name = name;
		void printFatherName() {

		}
    }

};

class Son1 :virtual public Father {
public:
    string name2;
    Son1(string name1, string name2) {
		this->name2 = name1;
    }

};

class Son2 :virtual public Father {
public:
    string name3;

};

class Grandson :public Son1, public Son2 {
	string grandsonName;
public:
	Grandson(string name1, string name2, string name3, string name4) :
		Father(name1), Son1(name1, name2), Son2(name1, name3), grandsonName(name4) {}
	void printGrandsonName() {
		cout << grandsonName << endl;
	}
};

int main() {
	string n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	Grandson gson(n1, n2, n3, n4);
	gson.printFatherName();
	cout << endl;
	gson.Son1::printSonName();
	cout << endl;
	gson.Son2::printSonName();
	cout << endl;
	gson.printGrandsonName();
	return 0;
}