#include<iostream>
using namespace std;

class MyString {
private:
	char* sptr;
	int len=0;
public:
	MyString() {
		cout << "Object Constructed. No Memory Allocated." << endl;
		sptr = NULL;

	}

	MyString(string s) {
		sptr = new char [100];
	/*	cout << s.length()<<endl; s.length()=5*/
		for (int i = 0;i<s.length(); i++) {
			sptr[i] = s[i];
			len++;
		}
		cout << "Object Constructed. " <<len+1 << " Bytes Allocated." << endl;
	}

	MyString(const MyString& S) {
		sptr = new char[100];
		this->len = 0;
		for (int i = 0;i<S.len; i++){
			this->sptr[i] = S.sptr[i];
			this->len++;
		}
		cout << "Object Constructed. " << len+1 << " Bytes Allocated." << endl;
	}

	~MyString() {
		if (sptr != NULL) {
			delete sptr;
			/*sptr = NULL;*/
			cout << "Object Destructed. " << len+1 << " Bytes Freed." << endl;
		}
		else
			cout << "Object Destructed. No Memory Freed.";
	}

	int getSize() {
		return len;
	}

	void printString() {
		if (sptr == NULL) {
			cout << "No Memory Allocated In This Object." << endl;
		}
		if(sptr != NULL){
		for (int i = 0; i<len; i++) {
			cout << sptr[i];
		}
		cout << endl;
		}
	}

	void stringCopy(MyString& S) {
		int i = 0;
		int Len = len;
		delete sptr;
		sptr = new char[100];
		for (i;i<S.len; i++) {
			this->sptr[i] = S.sptr[i];
		}
		len = i;
		/*delete S.sptr;
		S.sptr = NULL;*/
		cout << "String Copy, " <<S.len+1  << " Bytes Reallocated And "<<Len+1 <<" Bytes Freed." << endl;
	}
	void stringCat( MyString& S) {
		int j = 0;
		int Len = len;
		for ( int i = len; i < S.len+len; i++,j++) {
			this->sptr[i] = S.sptr[j ];
		}
		len = len + S.len;		
		cout << "String Connection, " << len+1 << " Bytes Reallocated And "<< Len+1<<" Bytes Freed."<<endl;
	}
};

int main() {
	MyString s1;
	MyString s2("Hello");
	MyString s3(s2);

	s1.printString();
	s2.printString();
	s3.printString();

	cout << s1.getSize() << " " << s2.getSize() << " " << s3.getSize() << endl;

	MyString s4("HiChina");

	s2.stringCopy(s4);
	s2.printString();

	s3.stringCat(s4);
	s3.printString();

	return 0;
}
