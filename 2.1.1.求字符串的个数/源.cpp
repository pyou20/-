#include<iostream>
using namespace std;

class MyString {

private:
    string S;
public:
    static int Num;
    MyString(string s) {
        S = s;
        Num++;
    }
    static int GetN() {
        return Num;
    }
    static string GetString( MyString *mystring) {
        return mystring->S;
    }
    ~MyString() {
        Num--;

    }
};
int MyString::Num = 0;

int main()
{
    MyString* str1 = new MyString("one");
    MyString* str2 = new MyString("two");
    MyString* str3 = new MyString("three");

    cout << "目前对象个数为：" << MyString::GetN() << endl;
    cout << "我是对象：" << MyString::GetString(str1) << endl;
    delete str1;
    cout << "目前对象个数为：" << MyString::GetN() << endl;
    cout << "我是对象：" << MyString::GetString(str2) << endl;
    delete str2;
    cout << "目前对象个数为：" << MyString::GetN() << endl;
    cout << "我是对象：" << MyString::GetString(str3) << endl;
    delete str3;
    cout << "目前对象个数为：" << MyString::GetN() << endl;
    return 0;
}