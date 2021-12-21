//#include<iostream>
//using namespace std;
//
//class Customer {
//private:
//	double points;
//public:
//	void set(double p) {
//		this->points = p;
//	}
//	Customer(double p) {
//		this->points = p;
//	}
//	virtual void recordPoints(double p) = 0;
//};
//
//class OrdinaryCustomer :public Customer {
//public:
//	OrdinaryCustomer(double p) :Customer(p){
//
//	}
//};

#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
	double points;          //1�� 
public:
	Customer(double p = 0) {           //1��
		points = p;
	}
	virtual double recordPoints(double amount) = 0;   //1��
};

class OrdinaryCustomer :public Customer {       //1��
public:
	OrdinaryCustomer(int p) :Customer(p) {}  //1��
	 double recordPoints(double amount) {  //1��
		points += amount * 0.20;
		return points;
	}
};

class MemberCustomer :public Customer {
public:
	MemberCustomer(int p) :Customer(p) {}   //1��
	 double recordPoints(double amount) {  //1��
		points += amount * 0.30;
		return points;
	}
};

class VIPCustomer :public MemberCustomer {
public:
	VIPCustomer(int p) :MemberCustomer(p) {}  //1��
	 double recordPoints(double amount) {  //1��
		points = MemberCustomer::recordPoints(amount) * 1.2;
		return points;
	}
};

int main() {
	OrdinaryCustomer oc(0);  //1��
	MemberCustomer mc(0);
	VIPCustomer vc(0);
	Customer* p;  //1��
	p = &oc;
	cout << p->recordPoints(8000) << endl; //1��
	p = &mc;
	cout << p->recordPoints(10000) << endl;
	p = &vc;
	cout << p->recordPoints(15000) << endl;
	return 0;
}

