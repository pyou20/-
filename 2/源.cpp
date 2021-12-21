#include<iostream>
using namespace std;

class Rectangle {
private:
    int R_X_top, R_Y_top, L_X_bottom, L_Y_bottom;

public:
    Rectangle(int r_Y_top, int r_X_top, int l_Y_bottom, int l_X_bottom)
    {
        if (r_X_top > l_X_bottom && r_Y_top > l_Y_bottom) {
            R_X_top = r_X_top;
            R_Y_top = r_Y_top;
            L_X_bottom = l_X_bottom;
            L_Y_bottom = l_Y_bottom;
        }
        else
        {
            R_X_top = 0;
            R_Y_top = 0;
            L_X_bottom = 0;
            L_Y_bottom = 0;
        }
    }


    void showLeftTop() {
        cout << L_X_bottom << "," << R_Y_top << endl;
    }

    void showRightTop() {
        cout << R_X_top << "," << R_Y_top << endl;
    }

    void showLeftBottom() {
        cout << L_X_bottom << "," << L_Y_bottom << endl;
    }

    void showRightBottom() {
        cout << R_X_top << "," << L_Y_bottom << endl;
    }

    int getHeight() {
        return R_Y_top - L_Y_bottom;
    }

    int getWidth() {
        return R_X_top - L_X_bottom;
    }

    int getArea() {
        return (R_Y_top - L_Y_bottom)*(R_X_top - L_X_bottom);
    }
    int getPerimeter() {
        return ((R_Y_top - L_Y_bottom) +(R_X_top - L_X_bottom)) * 2;
    }
};

int main() {
    int top, bottom, left, right;
    cin >> top >> right >> bottom >> left;
    Rectangle r(top, right, bottom, left);
    r.showLeftTop();   //������϶�������� 
    r.showRightTop();  //������϶�������� 
    r.showLeftBottom();  //������¶�������� 
    r.showRightBottom();  //������¶�������� 
    cout << r.getHeight() << " " << r.getWidth() << endl;  //����ߺͿ� 
    cout << r.getArea() << " " << r.getPerimeter() << endl;  //���������ܳ� 
    return 0;
}