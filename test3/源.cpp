#include<iostream>
using namespace std;

class Vector4 {
public:
	friend Vector4& operator+(const Vector4& v1, const Vector4& v2);
	int one, two, three, four;
	Vector4() {}
	Vector4(int a, int b, int c, int d) {
		one = a;
		two = b;
		three = c;
		four = d;
	}
	Vector4& operator+(int n) {
		one += n;
		two += n;
		three += n;
		four +=n;
		return *this;
	}
};

//Vector4 &operator+(const Vector4& v1,const Vector4 &v2){
//
//	Vector4* v;
//		v=new Vector4(v1.one + v2.one, v1.two + v2.two, v1.three + v2.three, v1.four + v2.four);
//		
//		return *v;
//}

Vector4& operator+(const Vector4& v1, const Vector4& v2) {


	Vector4 v(v1.one + v2.one, v1.two + v2.two, v1.three + v2.three, v1.four + v2.four);

	return v;
}


ostream& operator<<(ostream& out, const Vector4& V) {
	cout << V.one  <<" "<< V.two <<" "<< V.three <<" "<< V.four << endl;
	return out;
}

int main() {
	Vector4 v1(1,2,3,4);
	Vector4 v2(1,2,3,4);
	Vector4 v3;
	v3 = v1 + v2;
	cout<<v3;
	v3+2;
	cout << v3;
	return 0;
}
