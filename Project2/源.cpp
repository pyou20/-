#include<iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
    int sum;
    friend ostream& operator<<(ostream& out, Time& time);
public:

    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
        sum = h * 3600 + m * 60 + s;
    }

    Time& operator+(int S) {
        second = second + S;
        while (second >= 60) {
            second = second - 60;
            minute++;
        }
        while (minute >= 60) {
            minute -= 60;
            hour++;
        }
        while (hour >= 24) {
            hour -= 24;
        }
        return *this;
    }

    Time& operator-(int S) {
        second = second - S;
        while (second < 0) {
            second = second + 60;
            minute--;
        }
        while (minute <0) {
            minute += 60;
            hour--;
        }
        while (hour <0) {
            hour += 24;
        } 
        return *this;
    };

    int operator-(const Time& time) {       
        int s;
        s = (this->hour - time.hour) * 3600 + (this->minute - time.minute) * 60 + (this->second - time.second);
        return s;
    };

    void operator=(Time& time) {
        this->hour = time.hour;
        this->minute = time.minute;
        this->second = time.second;
        this->sum = time.sum;
    }
};
ostream& operator<<(ostream& cout, Time& time) {
    cout << time.hour << ':' << time.minute << ':' << time.second << endl;
    return cout;
}

int main() {
    int s;
    cin >> s;
    Time t1(13, 30, 20);
    t1 = t1 - s;
    cout << t1;
    Time t2(21, 10, 33);
    t2 = t2 + s;
    cout << t2;
    cout << t1 - t2 << endl;
    return 0;
}