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

    cout << "Ŀǰ�������Ϊ��" << MyString::GetN() << endl;
    cout << "���Ƕ���" << MyString::GetString(str1) << endl;
    delete str1;
    cout << "Ŀǰ�������Ϊ��" << MyString::GetN() << endl;
    cout << "���Ƕ���" << MyString::GetString(str2) << endl;
    delete str2;
    cout << "Ŀǰ�������Ϊ��" << MyString::GetN() << endl;
    cout << "���Ƕ���" << MyString::GetString(str3) << endl;
    delete str3;
    cout << "Ŀǰ�������Ϊ��" << MyString::GetN() << endl;
    return 0;
}