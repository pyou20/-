#include<iostream>
#include<cmath>
using namespace std;

class IntegerProcessing {
public:
	static int getNumberOfOne(int n) {
		int j = 0;
		 while (n){
			if (n %2 == 1)
				j++;
			n = n / 2;
		 }
		return j;
	}
	static int getBinMirror(int n) {
		long a[100] = {  };
		int A=0;
		int i = 0;
		while (n) {
			a[i] = n % 2;
			n /= 2;
			i++;
		}
		for (int j=0; j<31; j++)
		{
			A = A + a[j]*pow(2,31-j);
		}
		return A;
	}	
};
int main() {
	int n;
	IntegerProcessing a;
	cin >> n;

	cout << IntegerProcessing::getNumberOfOne(n)<<endl;
	cout << a.getBinMirror(n);
	return 0;
}