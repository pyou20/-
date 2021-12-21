#include<iostream>
using namespace std;

class MyArray {
private:
	int Size;
	int* ptr;
	friend ostream& operator<<(ostream& out,MyArray& arr);
	/*friend MyArray operator-( MyArray& n1, MyArray& n2);
	friend MyArray operator+( MyArray& n1,  MyArray& n2);*/
	friend int operator*(MyArray& n1, MyArray& n2);
public:
	MyArray(){
		ptr = NULL;
		Size = 0;
	}
	
	MyArray(int n) {
		Size = n;
		ptr = new int [Size];
	}

	MyArray(MyArray& arr) {
		Size = arr.Size;
		ptr = new int[Size];
		for (int i = 0; i < Size; i++) {
			ptr[i] = arr[i];
		}
	}

	int getSize() {
		return Size;
	}

	int &operator[](int i)
	{
		if (i >Size-1)
		{
			cout << "索引超过最大值" << endl;
			// 返回第一个元素
			return ptr[0];
		}
		return ptr[i];
	}

	MyArray& operator=(MyArray *n1) {
		if (ptr != NULL) {
			delete ptr;
			ptr = NULL;
		}
		this->Size = n1->Size;
		this->ptr = new int(*n1->ptr);
		return *this;
	}

	MyArray &operator+(MyArray& n) {
		MyArray* p1 = new MyArray(n.Size);
		for (int i = 0; i < n.Size; i++) {
			p1->ptr[i] = this->ptr[i] + n.ptr[i];
		}
		return *p1;

	}

	MyArray &operator-(MyArray& n) {
		MyArray* p2 = new MyArray(n.Size);
		for (int i = 0; i < n.Size; i++) {
			p2->ptr[i] = this->ptr[i] - n.ptr[i];
		}
		return *p2;
	}

	~MyArray()
	{
		
	}
};


//MyArray operator+( MyArray& n1, MyArray& n2) {
//	MyArray *pt=new MyArray(n1.Size);
//	for (int i = 0; i < n1.Size;i++) {
//		pt->ptr[i] = n1.ptr[i] + n2.ptr[i];
//	}
//	return *pt;
//}

//MyArray operator-(MyArray& n1, MyArray& n2) {
//	MyArray* pt = new MyArray(n1.Size);
//	for (int i = 0; i < n1.Size; i++) {
//		pt->ptr[i] = n1[i] - n2[i];
//	}
//	return *pt;
//}

int operator*(MyArray& n1, MyArray& n2) {
	int sum=0;
	for (int i = 0; i < n1.Size; i++) {
		sum += n1[i] * n2[i];
	}
	return sum;
}

ostream& operator<<(ostream& out, MyArray& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i];
		if(i < arr.getSize()-1)
		cout << ",";
	}
	cout << endl;
	return out;
}




int main() {
	int n;
	cin >> n;
	MyArray arr1(n);
	for (int i = 0; i < arr1.getSize(); i++)
		cin >> arr1[i];
	cout << arr1;

	MyArray arr2(arr1);
	for (int i = 0; i < arr2.getSize(); i++)
		arr2[i] += 1;
	cout << arr2;

	MyArray arr3, arr4;
	arr3 = arr2 + arr1;
	cout << arr3;
	arr4 = arr2 - arr1;
	cout << arr4;

	cout << arr1 * arr2 << endl;

	return 0;
}