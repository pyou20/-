#include<iostream>
#include <string>
using namespace std;
class Test {
private:

public:
    int GetMax(int x, int y) {
        return x > y ? x : y;
    }

    float GetMax(float f1, float f2) {
        return f1 > f2 ? f1 : f2;
    }
    string GetMax(string A, string B) {
		if (A.compare(B) == 1) {
			return A;
		}
		else
			return B;
	}
};

int main()
{
	int a, b;
	float f1, f2;
	string str1, str2;
	Test s;

	cin >> a >> b;
	cin >> f1 >> f2;
	cin.get();
	getline(cin, str1);
	getline(cin, str2);

	cout << "����int���нϴ��Ϊ��" << s.GetMax(a, b) << endl;
	cout << "����float���нϴ��Ϊ��" << s.GetMax(f1, f2) << endl;
	cout << "����string�нϴ��Ϊ��" << s.GetMax(str1, str2) << endl;
}
