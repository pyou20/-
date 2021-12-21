#include<iostream>
using namespace std;
double PI = 3.14159265;
class Circle {
private:
	double x, y, radiuas;
	friend double operator+(const Circle& C1, const Circle& C2);
	friend ostream& operator<<(ostream& cout, const Circle& C);
public:
	Circle() {

	}
	Circle(double x, double y, double r) {
		this->x = x;
		this->y = y;
		radiuas = r;
	}

	void operator+(double n) {
		x += n;
		y += n;
		radiuas += n;
	}

	Circle& operator=(const Circle& C) {
		this->x = C.x;
		this->y = C.y;
		this->radiuas = C.radiuas;
		return *this;
	}

};

double operator+(const Circle& C1, const Circle& C2) {
	return (C1.radiuas * C1.radiuas + C2.radiuas * C2.radiuas) * PI;
}

ostream& operator<<(ostream& cout, const Circle& C) {
	cout << "Ô²ÐÄ£º" << C.x << ',' << C.y << " °ë¾¶£º" << C.radiuas << endl;
	return cout;
}

int main() {

	double x, y, r, n;

	cin >> x >> y >> r >> n;

	Circle c1(x, y, r);

	Circle c2 = c1;

	c2 + n;

	cout << c1;

	cout << c2;

	cout << c1 + c2 << endl;

	return 0;


}
