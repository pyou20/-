#include<iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r) :radius(r) {}
    double getRadius() const {
        return radius;
    }
    Circle(Circle& r) = delete;    //删除复制构造函数
    Circle(const Circle& r) = delete;  //删除复制构造函数
};

class Rectangle {
    double height, width;
public:
    Rectangle(double h, double w) :height(h), width(w) {}
    double getHeight()const {
        return height;
    }
    double getWidth()const {
        return width;
    }
    Rectangle(Rectangle& r) = delete;   //删除复制构造函数
    Rectangle(const Rectangle& r) = delete;   //删除复制构造函数
};

class Area {
private:

public:
    static double calArea(Circle& C) {
        return C.getRadius() * C.getRadius() * 3.14159265;
    }
    static const double calArea(const Circle& C) {
        return C.getRadius() * C.getRadius() * 3.14159265;
    }
    static double calArea(Rectangle& R) {
        return R.getHeight() * R.getWidth();
    }

    static const double calArea(const Rectangle& R) {
        return R.getHeight() * R.getWidth();
    }
};

int main() {
    double r, h, w;
    cin >> r >> h >> w;
    const Circle c1(r);
    Circle c2(r + 2);
    const Rectangle r1(h, w);
    Rectangle r2(h + 2, w + 2);
    cout << Area::calArea(c1) << endl;
    cout << Area::calArea(c2) << endl;
    cout << Area::calArea(r1) << endl;
    cout << Area::calArea(r2) << endl;
    return 0;
}
