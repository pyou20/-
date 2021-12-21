#include<iostream>
using namespace std;

class Test {
private:
    int x;
    int y;
public:
        Test(int X, int Y) {
        x = X;
        y = Y;
    }
    Test *setXY1(int x, int y) {
        this->x = this->x + x;
        this->y = this->y + y;
        return this;
    }

    Test &setXY2(int x, int y) {
        this->x =this->x-x;
        this->y =this->y-y;
        return *this;
    }

    void showXY() {
        cout << x << " " << y << endl;
    }
};
int main() {
    int x, y;
    cin >> x >> y;
    Test t(x, y);
    t.setXY1(10, 10)->showXY();
    t.setXY2(20, 20).showXY();
    return 0;
}