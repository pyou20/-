#include<iostream>
using namespace std;

class Date {
private:
	int d, y, m;
public:
	Date(){}
	Date(int Y, int M, int D) {
		d = D;
		y = Y;
		m = M;
	}
	void setdate(int Y, int M, int D) {
		d = D;
		y = Y;
		m = M;
	}
};
class Product {
private:
	string number;
	string name;
	Date manuDate;
public:
	Product(){}
	Product(string num, string N, int Y, int M, int D) :manuDate(Y, M, D) ,number(num),name(N){}
	Product(Product& p) {
		this->name = p.name;
		this->number = p.number;
		this->manuDate = p.manuDate;
	}
	void print() {
		cout << number << " " << name << " ";
	}


	~Product(){}
}

