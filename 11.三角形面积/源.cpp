#include<iostream>
using namespace std;


class Point {
private:
    double X, Y;
public:
    Point() {

    }
    Point(double x, double y) {
        X = x;
        Y = y;
    }

    Point(const Point& point) {
        Y = point.Y;
        X = point.X;
    }
    double getX() {
        return X;
    }
    double getY() {
        return Y;
    }
};

class Triangle {
private:
    Point m_A;
    Point m_B;
    Point m_C;
public:
    Triangle(const Point& A, const Point& B, const Point& C) :m_A(A), m_B(B), m_C(C) {

    }
    double getArea() {
        double s;
        s = (m_A.getX()*m_B.getY()
            +m_B.getX()*m_C.getY()
            +m_A.getY()*m_C.getX()
            -m_B.getY()*m_C.getX()
            -m_B.getX()*m_A.getY()
            -m_A.getX()*m_C.getY())/2;
        return fabs(s);
    }

};

int main() {
    double x, y;
    cin >> x >> y;
    Point a(x, y);
    cin >> x >> y;
    Point b(x, y);
    cin >> x >> y;
    Point c(x, y);
    Triangle t(a, b, c);
    cout << t.getArea() << endl;
    return 0;
}