#include<iostream>
#include<string>
using namespace std;


class Customer {
private:
	string gender;
public:
	Customer() {}
	Customer(string set) {
		gender = set;
	}
	virtual double calculateCost(char set) { return 0; }
};

class AdultCustomer :public Customer {
private:
	string P;
public:
	AdultCustomer(){}
	AdultCustomer(string S) :Customer(S) {
		P = S;
	}
	double calculateCost(char set){
		if (P == "male") {
			if (set == 'A') {
				return 100 * 1.15;
			}
			if (set == 'B') {
				return 120 * 1.15;
			}
			if (set == 'C') {
				return 150 * 1.15;
			}
		}
		else
		{
			if (set == 'A') {
				return 100 * 1.05;
			}
			if (set == 'B') {
				return 120 * 1.05;
			}
			if (set == 'C') {
				return 150 * 1.05;
			}
		}
	}
};

class ElderlyCustomer :public Customer {
private:
	string P;
public:
	ElderlyCustomer(){}
	ElderlyCustomer(string S) :Customer(S) {
		P = S;
	}
	double calculateCost(char set){
			if (set == 'A') {
				return 100 *0.95;
			}
			if (set == 'B') {
				return 120 * 0.95;
			}
			if (set == 'C') {
				return 150 * 0.95;
			}	
	}
		
};

class UnderAgeCustomer :public Customer {
private:
	string P;
public:
	UnderAgeCustomer(){}
	UnderAgeCustomer(string S) :Customer(S) {
		P = S;
	}
	double calculateCost(char set) {
		if (set == 'A') {
			return 100 * 0.70;
		}
		if (set == 'B') {
			return 120*0.70;
		}
		if (set == 'C') {
			return 150 * 0.70;
		}
	}
};

int main(){

	AdultCustomer c1("male");

	AdultCustomer c2("female");

	ElderlyCustomer c3("male");

	UnderAgeCustomer c4("female");

	Customer* p;

	char set1, set2, set3, set4;

	cin >> set1 >> set2 >> set3 >> set4;

	p = &c1;

	cout << p->calculateCost(set1) << endl;

	p = &c2;

	cout << p->calculateCost(set2) << endl;

	p = &c3;

	cout << p->calculateCost(set3) << endl;

	p = &c4;

	cout << p->calculateCost(set4) << endl;

	return 0;

}