#include<iostream>
using namespace std;

class Father {
public:
	string Fathername;
	Father() {
	};
	Father(string name) {
		Fathername = name;
	}
	void printFatherName(){
		cout << Fathername<<endl;
		}
};

class Son1 :virtual public Father {
public:
	string Son1name;
	Son1(string Fathername, string Sonname) :Father(Fathername), Son1name(Sonname) {
	}
	void printSonName() {
		cout << Father::Fathername << endl << Son1name<<endl;
	}

};

class Son2 :virtual public Father {
public:
	string Son2name;
	Son2(string Fathername, string Sonname) :Son2name(Sonname), Father(Fathername) {
	}
	void printSonName() {
		cout << Father::Fathername << endl << Son2name<<endl;
	}
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