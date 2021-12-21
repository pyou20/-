//题目描述
//​定义一个抽象的图形类Shape，该类有两个纯虚函数getArea和getPerim，分别代表求面积和求周长的操作。由Shape派生出长方形类Rectangle和圆形类Circle并在这两个派生类中实现基类中的各个纯虚函数。在主函数中创建矩形类、圆形类的对象并定义一个Shape类的指针，用Shape类的指针指向不同派生类的对象，然后通过该指针调用求面积和求周长的函数并输出结果。在相关类中使用的变量名规定：
//(1)长方形使用double类型变量length、width表示长和宽；
//
//(2)圆形使用double类型变量radius表示半径；
//
//(3)面积或周长计算中使用的PI为double类型，值固定为3.1415926。
//
//main函数已经完成，请根据main函数的内容完成类的设计：
#include<iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() {
        return 0;
    }

    virtual double getPerim() {
        return 0;
    }
};

class Rectangle :public Shape {
private:
    double l, w;
public:
	Rectangle(double L, double W) {
		l = L;
		w = W;
	}

    double getArea() {
        return l * w;
    }

     double getPerim() {
        return (l + w) * 2;
    }
};

class Circle:public Shape {
private:
	double r;
public:
	Circle(double R) {
		r = R;
	}

	double getArea() {
		return r*r*3.1415926;
	}

	 double getPerim() {
		return 2*3.1415926*r;
	}
};

int main() {

	double length, width, radius;

	cin >> length >> width;

	cin >> radius;

	Rectangle rectangle(length, width);

	Circle circle(radius);

	Shape* p;

	//计算长方形面积和周长

	p = &rectangle;

	cout << p->getArea() << endl;

	cout << p->getPerim() << endl;

	//计算圆形面积和周长

	p = &circle;

	cout << p->getArea() << endl;

	cout << p->getPerim() << endl;

	return 0;

}
