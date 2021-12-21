#include<iostream>
using namespace std;

class Operation {
protected:
    int numberA;
    int numberB;
public:
	Operation(int a, int b) {
		numberA = a;
		numberB = b;
	}
	virtual int getResult() { return 0; };
};

class Add :public Operation {
//private:
//	int a, b;
public:
	Add(int A, int B):Operation(A,B)/*a(A),b(B) */{}
	 int getResult() {
		return Operation::numberA + numberB;
	}
};

class Sub :public Operation {
//private:
//	int a, b;
public:
	Sub(int a, int b) :Operation(a, b)/*,a(a),b(b)*/{}
	int getResult() {
		return numberA -numberB;
	}
};

class Product :public Operation {
//private:
//	int a, b;
public:
	Product(int a, int b) :Operation(a, b) /*a(a), b(b) */{}
	int getResult() {
		return numberA * numberB;
	}
};

class SumOfSquares :public Operation {
//private:
//	int a, b;
public:
	SumOfSquares(int a, int b) :Operation(a, b)/*, a(a), b(b)*/ {}
	int getResult() {
		return numberA* numberA + numberB * numberB;
	}
};

int main() {
	int numA, numB;
	cin >> numA >> numB;
	Add add(numA, numB);	  //��	 
	Sub sub(numA, numB);  //�� 
	Product pro(numA, numB);  //�˻� 
	SumOfSquares sos(numA, numB); //ƽ���� 
	Operation* op;
	op = &add;
	cout << op->getResult() << endl;
	op = &sub;
	cout << op->getResult() << endl;
	op = &pro;
	cout << op->getResult() << endl;
	op = &sos;
	cout << op->getResult() << endl;
	return 0;
}