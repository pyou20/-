#include<iostream>
using namespace std;
class Clock {
private:
    int hour;
    int minute=30;
    int second=40;
public:
       Clock(){
           this->hour = 0;
           this->minute = 0;
           this->second = 0;
    }
    Clock(int h, int m=30, int s=40) {
        hour = h;
        minute = m;
        second = s;
    }
    //Clock(int h, int m, int s = 40) {
    //    hour = h;
    //    minute = m;
    //    second = s;
    //}
    //Clock(int h, int m, int s) {
    //    hour = h;
    //    minute = m;
    //    second = s;
    /*}*/
    void Display() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
    void SetValue(int h,int m=30, int s = 40) {
        hour = h;
        minute = m;
        second = s;
    }
};
int main()
{
    Clock o1(14);
    Clock o2(15, 40);
    Clock o3(15, 40, 59);
    Clock o4;

    o1.Display();
    o2.Display();
    o3.Display();
    o4.Display();
    o4.SetValue(23);
    o4.Display();

    return 0;
}