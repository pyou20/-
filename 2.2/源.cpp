#include<iostream>
using namespace std;

class Date {
private:
    int m_year;
    int m_month;
    int m_day;
public:
    Date() {
        m_year = 2021;
        m_month = 4;
        m_day = 16;
    }

    Date(int year, int month, int day) {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    Date(const Date& date) {
        m_month = date.m_month;
        m_year = date.m_year;
        m_day = date.m_day;
    }

    void setDate(int y, int m, int d) {
        m_year = y;
        m_month = m;
        m_day = d;
    }

    void showDate() {
        cout << m_year << "/" << m_month << "/" << m_day << endl;
    }

};
int main() {
    Date d1;
    d1.showDate();
    Date d2(2021, 3, 13);
    d2.showDate();
    d2.setDate(2021, 5, 1);
    d2.showDate();
    Date d3(d1);
    d3.showDate();
    return 0;
}