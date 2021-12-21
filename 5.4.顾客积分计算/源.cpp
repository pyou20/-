#include<iostream>
using namespace std;

class Customer{
  private:
    double points;
  public:
	  virtual void recordPoints(double money) {}
	virtual double getPoints() {return 0;}
};

class OrdinaryCustomer:public Customer {
private:
	double points;
public:
	OrdinaryCustomer(double Money) {
		recordPoints(Money);
	}
	void recordPoints(double money) {
		points=money*0.20;
	}
	double getPoints() {
		return points;
	}
};

class MemberCustomer :public Customer {
private:
	double points;

public:
	MemberCustomer(double Money){
		recordPoints(Money);
	}
	void recordPoints(double money) {
		points = money * 0.30;
	}
	double getPoints() {
		return points;
	}
};

class VIPCustomer :public MemberCustomer {
private:
	double points;
public:
	VIPCustomer(double Money) : MemberCustomer(Money) {
		recordPoints(Money);
	}

	void recordPoints(double money) {
		this->points = (money*0.30)+ (money * 0.3)*0.20;
	}

	double getPoints() {
		return points;
	}
};

int main() {

	OrdinaryCustomer oc(0);

	MemberCustomer mc(0);

	VIPCustomer vc(0);

	Customer* p;

	double m1, m2, m3;

	cin >> m1 >> m2 >> m3;

	p = &oc;

	p->recordPoints(m1);

	cout << p->getPoints() << endl;

	p = &mc;

	p->recordPoints(m2);

	cout << p->getPoints() << endl;

	p = &vc;

	p->recordPoints(m3);

	cout << p->getPoints() << endl;

	return 0;

}