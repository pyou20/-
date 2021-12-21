#include<iostream>
#include<iomanip>
constexpr auto n = 5;;
using namespace std;


class Test {
private:

public:
    void Swap(int a, int b) {
        int temp;
        temp = a;
        a = b;
    }
    void Swap(int* a, int* b) {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
	void Swap(float &a, float &b) {
		double temp;
		temp = a;
		a = b;
		b = temp;
	}
	void Swap(int a[]) {
		for (int i = 0; i<5; i++) {
			a[i]++;
		}
	}
	
	void Print(int a[]) {
		for (int i = 0; i<5; i++)
		{
			cout << a[i] << endl;
		}
	}
	
};

int main()
{
	int a, b;
	int c, d;
	float e, f;
	int ints[n];
	Test* o = new Test();


	cin >> a >> b;
	cin >> c >> d;
	cin >> e >> f;
	for (int i = 0; i < n; i++)
	{
		cin >> ints[i];
	}
	o->Swap(a, b);
	o->Swap(&c, &d);
	o->Swap(e, f);
	o->Swap(ints);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << fixed << setprecision(2) << e << endl;
	cout << fixed << setprecision(2) << f << endl;
	o->Print(ints);

	return 0;
}