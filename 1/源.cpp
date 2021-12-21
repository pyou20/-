#include<iostream>
#include<string>
using namespace std;

class Test {
public:
	int DateLength(int x) {
		int num = 0;
		do {
			num++;
			x = x / 10;
		} while (x);
		return num;
	}

	int DateLength(string a) {
		return a.length();
	}
};

int main() {
	int a;
	string s;
	getline(cin, s);
	cin >> a;
	Test t;
	cout << t.DateLength(s) << endl;
	cout << t.DateLength(a)<< endl;
	return 0;
}