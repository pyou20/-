#include<iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;
	friend Complex& operator*(const Complex& C1, const Complex& C2);
	friend ostream& operator<<(ostream& cout, const Complex& C);
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double Real, double Imag) {
		real = Real;
		imag = Imag;
	}

	void operator+(double n) {
		this->imag += n;
		this->real += n;
	}
	~Complex() {
		
	}

};

Complex &operator*(const Complex &C1, const Complex& C2){
	Complex* p;
	p = new Complex();
	p->real = C1.real * C2.real - C1.imag * C2.imag;
	p->imag = C1.real * C2.imag + C2.real * C1.imag;
	return *p;
}

ostream& operator<<(ostream& cout, const Complex& C) {
	cout << C.real << '+' << C.imag << "i" << endl;
	return cout;
}

int main() {

	double real1, imag1, real2, imag2;

	cin >> real1 >> imag1 >> real2 >> imag2;

	Complex c1(real1, imag1), c2(real2, imag2);

	cout << c1;

	cout << c2;

	Complex c3 = c1 * c2;

	cout << c3;

	c3 + 3;

	cout << c3;

	return 0;


}