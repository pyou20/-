#include<iostream>
using namespace std;

class Base1 {
	int a, b, c;
public:
	void initBase1(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	int getA()const {
		return a;
	}
	int getB()const {
		return b;
	}
protected:
	int getC()const {
		return c;
	}
};

class Base2 {
	int x, y, z;
public:
	void initBase2(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	int getX()const {
		return x;
	}
	int getY()const {
		return y;
	}
	int getZ()const {
		return z;
	}
};

class Base3 {
protected:
	int i, j, k;
	void initBase3(int i, int j, int k) {
		this->i = i;
		this->j = j;
		this->k = k;
	}
private:
	int getI()const {
		return i;
	}
	int getJ()const {
		return j;
	}
	int getK()const {
		return k;
	}

};

class Derived :public Base2, private Base3, protected Base1 {
private:

protected:


public:
	void initBase1(int a, int b, int c) {
		Base1::initBase1(a, b, c);
	}

	int getA()const {
		return Base1::getA();
	}
	int getB()const {
		return Base1::getB();
	}
	int getC()const {
		return Base1::getC();
	}

	void initBase3(int i, int j, int k) {
		Base3::initBase3(i, j, k);
	}
	int getI() {
		return Base3::i;
	}
	int getJ() {
		return Base3::j;
	}
	int getK() {
		return Base3::k;
	}
};

int main() {
	int a, b, c;
	int x, y, z;
	int i, j, k;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	cin >> i >> j >> k;
	Derived d;
	d.initBase1(a, b, c);
	d.initBase2(x, y, z);
	d.initBase3(i, j, k);
	cout << d.getA() << " " << d.getB() << " " << d.getC() << endl;
	cout << d.getX() << " " << d.getY() << " " << d.getZ() << endl;
	cout << d.getI() << " " << d.getJ() << " " << d.getK() << endl;
	return 0;
}
