#include<iostream>
using namespace std;

class HouseProperty {
private:
	double area;
	double unitPrice;
public:
	HouseProperty(double Area, double UnitPrice) {
		area = Area;
		unitPrice = UnitPrice;
	}
	virtual double taxCalculation() { return 0; }
};

class Residence :public HouseProperty {
private:
	double area;
	double unitPrice;
public:
	Residence(double Area,double UnitPrice): HouseProperty(Area,UnitPrice) {
		area = Area;
		unitPrice = UnitPrice;
	}
	double taxCalculation() {
		if (area <= 90) {
			return area * unitPrice * 0.015;
		}
		else {
			return area * unitPrice * 0.02;
		}
	}
};

class Shop :public HouseProperty {
private:
	double area;
	double unitPrice;
public:
	Shop(double Area, double UnitPrice): HouseProperty(Area, UnitPrice) {
		area = Area;
		unitPrice = UnitPrice;
	}
	double taxCalculation() { 
		if (area <= 30) {
			return area * unitPrice * 0.03;
		}
		else if(area>30&&area<=100){
			return area * unitPrice * 0.04;
		}
		else {
			return area * unitPrice * 0.05;
		}
	}
};

class Villa :public Residence {
private:
	double area;
	double unitPrice;
public:
	Villa(double Area, double UnitPrice):Residence(Area,UnitPrice){
		area = Area;
		unitPrice = UnitPrice;
	}
	double taxCalculation() { 
		return area * unitPrice*0.05 + 100000.0;
	}
};

int main() {

	double area;

	double unitPrice;

	cin >> area >> unitPrice;

	Residence h1(area, unitPrice);

	cin >> area >> unitPrice;

	Shop h2(area, unitPrice);

	cin >> area >> unitPrice;

	Villa h3(area, unitPrice);

	HouseProperty* p;

	p = &h1;

	cout << p->taxCalculation() << endl;

	p = &h2;

	cout << p->taxCalculation() << endl;

	p = &h3;

	cout << p->taxCalculation() << endl;

	return 0;

}