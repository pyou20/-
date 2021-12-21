#include<iostream>
#include<cmath>
using namespace std;
class Circle{
private:
    double R;
public:
      Circle(const double r) {
        R = r;
    }
    /*Circle(double r) {
        R = r;
    }*/
    double getR() const{
        return R;
    }


};
class Rectangle {
private:
    double H;
    double W;
public:
     Rectangle(const double h, const double w){
        H = h;
        W = w;
    }
   /* Rectangle(double h, double w){
        H = h;
        W = w;
    }*/
    double getH() const{
        return H;
    }

    double getW() const{
        return W;
    }

};
class Area {
private:

public:
    static double calArea(Circle& C) {
        return C.getR() * C.getR()* 3.14159265;
    }

    static const double calArea( const Circle& C) {
        return C.getR() * C.getR() * 3.14159265;
    }

    static double calArea(Rectangle& R) {
        return R.getH() * R.getW();
    }

    static const double calArea(const Rectangle& R) {
        return R.getH() * R.getW();
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