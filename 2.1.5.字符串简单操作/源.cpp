#include<iostream>
#include <algorithm>
#include <string>
using namespace std;

class Test {
private:
    string str;
public:
    void SetStr(string s) {
        str = s;
    }

    string GetStr() {
        return str;
    }

    int GetLength() {
        return str.length()-1;
    }
    void Reverse()  {
        reverse(str.begin(), str.end());
        cout<<str<<endl;
    }
};

int main()
{
	string str;
	getline(cin, str);
	Test* s = new Test();
	s->SetStr(str);
	cout << "��������ַ����ǣ�" << s->GetStr() << endl;
	cout << "�ַ�������Ϊ��" << s->GetLength() << endl;
	cout << "���ַ������������";
	s->Reverse();
	delete s;
	return 0;
}