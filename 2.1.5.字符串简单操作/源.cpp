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
	cout << "ÄúÊäÈëµÄ×Ö·û´®ÊÇ£º" << s->GetStr() << endl;
	cout << "×Ö·û´®³¤¶ÈÎª£º" << s->GetLength() << endl;
	cout << "½«×Ö·û´®µ¹ĞòÊä³ö£º";
	s->Reverse();
	delete s;
	return 0;
}