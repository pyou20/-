#include<iostream>
#include<string>
#include<string>
#include "D:/Windows Kits/10/Include/10.0.22000.0/ucrt/string.h"
#pragma warning(disable:4996)
using namespace std;

class MyString {
	char* ptr;
public:
	int size()const {
		return strlen(ptr);
	}
	MyString() {
		ptr = new char[1];
		ptr[0] = '\0';
	}
	MyString(const char* p) {
		ptr = new char[strlen(p) + 1];
		strcpy(ptr, p);
	}
	MyString(const MyString& str) {
		ptr = new char[str.size() + 1];
		strcpy(ptr, str.ptr);
	}
	~MyString() {
		delete[]ptr;
	}
	friend ostream& operator<<(ostream& out, const MyString& str);
	friend MyString operator+(const MyString& s1, const MyString& s2);
	friend int operator==(const MyString& s1, const MyString& s2);
	friend int operator!=(const MyString& s1, const MyString& s2);
	friend int operator<(const MyString& s1, const MyString& s2);
	friend int operator<=(const MyString& s1, const MyString& s2);
	friend int operator>(const MyString& s1, const MyString& s2);
	friend int operator>=(const MyString& s1, const MyString& s2);
	MyString& operator=(const MyString& s);
	MyString& operator+=(const MyString& s);
	char operator[](int i);
};

ostream& operator<<(ostream& out, const MyString& str) {

	cout << str.ptr;
	return cout;
}

MyString operator+(const MyString& s1, const MyString& s2) {
	MyString* S;
	S = new MyString();
	int m= s1.size();
	int n = s2.size();
	for (int i = 0; i < m; i++) {
		S->ptr[i] = s1.ptr[i];
	}
	S->ptr[m] = '\0';
	int i = 0;
	for (int j = m; j < m + n; j++) {
		S->ptr[j] = s2.ptr[i];
		i++;
	}
	S->ptr[m + n ] = '\0';
	return *S;
}

int operator==(const MyString& s1, const MyString& s2) {
	int i = strcmp(s1.ptr, s2.ptr);
	if (i == 0)
		return 1;
	else
		return 0;
}

int operator!=(const MyString& s1, const MyString& s2) {
	int i = strcmp(s1.ptr, s2.ptr);
	if (i == 0)
		return 0;
	else
		return 1;
}

int operator<(const MyString& s1, const MyString& s2) {
	int n = s1.size();
	int m = s2.size();
	for (int i = 0; i < n || i < m; i++) {
		if (s1.ptr[i] < s2.ptr[i]) {
			return 1;
		}
		else
			return 0;
	}

}

int operator<=(const MyString& s1, const MyString& s2) {
	int n = s1.size();
	int m = s2.size();
	for (int i = 0; i < n || i < m; i++) {
		if (s1.ptr[i] <= s2.ptr[i]) {
			return 1;
		}
		else
			return 0;
	}
}

int operator>(const MyString& s1, const MyString& s2) {
	int n = s1.size();
	int m = s2.size();
	for (int i = 0; i < n || i < m; i++) {
		if (s1.ptr[i] >s2.ptr[i]) {
			return 1;
		}
		else
			return 0;
	}
}

int operator>=(const MyString& s1, const MyString& s2) {
	int n = s1.size();
	int m = s2.size();
	for (int i = 0; i < n || i < m; i++) {
		if (s1.ptr[i] >= s2.ptr[i]) {
			return 1;
		}
		else
			return 0;
	}
}

MyString& MyString:: operator=(const MyString& s) {
	int m = s.size();
	for (int i = 0; i < m; i++)
		this->ptr[i] = s.ptr[i];
	return *this;
}

MyString& MyString::operator+=(const MyString& s) {
	int n = this->size();
	int m = s.size();
	int j = 0;
	for (int i = n; i < m + n; i++) {
		this->ptr[i] = s.ptr[j];
		j++;
	}
	this->ptr[m + n] = '\0';
	return *this;
}

char MyString::operator[](int i) {
	return this->ptr[i];
}


int main() {

	MyString s1("Hello"), s2("World"), s3("China");
	cout << (s1 > s2) << " " << (s1 >= s2) << " " << (s1 <= s2) << " " << (s2 < s3) << endl;
	cout << (s1 == s2) << " " << (s1 != s3) << endl;
	MyString s4 = s1 + s2;
	cout << s4 << endl;
	s1 = s2 = s3;
	cout << s1 << " " << s2 << " " << s3 << endl;
	s4 += s3;
	cout << s4 << endl;
	for (int i = s4.size() - 1; i >= 0; i--)
		cout << s4[i];
	cout << endl;
	return 0;
}