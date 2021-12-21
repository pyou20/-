#include<iostream>
using namespace std;
class Point {
private:
    double m_x, m_y;
public:
    Point(double x, double y) {
        m_x = x;
        m_y = y;
    }
    Point(const Point& p) {
        m_x = p.m_x;
        m_y = p.m_y;
    }
    double getx() {
        return m_x;
    }
    double gety() {
        return m_y;
    }
};

class Circle {
private:
    Point center;
    double radius;
public:
    Circle(double X ,double Y, double r) :center(X,Y){
        radius=r;
    }
    double getArea() {
        return radius * radius * 3.14159265;
    }
    double getPerimeter() {
        return 2.0 * radius * 3.14159265;
    }
    int isInTheCircle(Point& p) {
        double d = sqrt((p.getx()-center.getx())* (p.getx() - center.getx())
                    + (p.gety() - center.gety())* (p.gety() - center.gety()));
        if (d>radius)
            return 0;
        if (d = radius)
            return 0;
        if (d < radius)
            return 1;
    }
};
int main() {
    double x, y, radius;
    cin >> x >> y;
    cin >> radius;
    Circle c(x, y, radius);
    cin >> x >> y;
    Point p(x, y);
    cout << c.getArea() << endl;
    cout << c.getPerimeter() << endl;
    if (c.isInTheCircle(p))
        cout << "该点在圆内部！" << endl;
    else
        cout << "该点不在圆内部！" << endl;
    return 0;
}