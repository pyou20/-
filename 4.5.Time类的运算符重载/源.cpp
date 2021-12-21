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
    Time &operator+(int S) {
        /*hour += S / 3600;
        minute += (S % 3600) / 60;
        second += ((S % 3600) % 60);
        if (second += ((S % 3600) % 60) >=60) {
            minute++;
            second = second-60;
        }*/
        /*hour = (sum + S) / 3600;
        minute = ((sum + S) % 3600) / 60;
        second= ((sum +S) % 3600) %60;
        if (hour > 24) {
            hour = hour - 24;
        }有问题的片段*/

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

    Time &operator-(int S) {
       
            /*hour -= S/ 3600;
            if ((hour - S / 3600) < 0) {
                hour = (hour - S / 3600) + 24;
            }
            minute -= (S % 3600) / 60;
            second-= ((S % 3600) % 60);
            if (second -= ((S % 3600) % 60) < 0) {
                minute--;
                second=60+second;
            }*/  

        /*hour = (sum - S) / 3600;
        if (hour < 0)
        {
            hour = hour + 24;
        }
        minute = ((sum - S) % 3600) / 60;
        second = ((sum - S) % 3600) % 60;
        if (second < 0) {
            minute--;
            minute +=60 ;
            second += 60;
        }有问题的片段*/

        second = second - S;
        while (second < 0) {
            second = second + 60;
            minute--;
        }
        while (minute < 0) {
            minute += 60;
            hour--;
        }
        while (hour < 0) {
            hour += 24;
        }

            return *this;
    };
    int operator-(const Time&time) {
        /*int s1;
        int s2;
        s1 = this->hour * 3600 + this->minute * 60 + this->second;
        s2 = time.hour * 3600 + time.minute * 60 + time.second;
        return s1 - s2;*/

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
    cout << time.hour << ':' << time.minute << ':' << time.second<<endl;
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