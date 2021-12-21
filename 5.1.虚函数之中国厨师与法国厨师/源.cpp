#include<iostream>
using namespace std;

class Chef {
public:
	void makeFish() {
		cout << "��ͬ�ĳ�ʦ������ͬ����" << endl;
	}

	virtual void makeSoup() {
		cout << "��ͬ�ĳ�ʦ������ͬ����" << endl;
	}
    Chef() {}
};
class ChineseChef:public Chef {
public:
    ChineseChef() {}

	void makeFish() {
		cout << "�й���ʦ����������" << endl;
	}

	void makeSoup() {
		cout << "�й���ʦ�����߲���" << endl;
	}
};

class FrenchChef :public Chef{
public:
    FrenchChef() {};
	void makeFish() {
		cout << "������ʦ��������" << endl;
	}

	void makeSoup() {
		cout << "������ʦ����������" << endl;
	}
};

int main() {
	Chef ch1;
	ChineseChef ch2;
	FrenchChef ch3;
	Chef* p = &ch1;
	p->makeFish();
	p->makeSoup();
	ch1.makeFish();
	ch1.makeSoup();
	cout << endl;
	p = &ch2;
	p->makeFish();
	p->makeSoup();
	ch2.makeFish();
	ch2.makeSoup();
	cout << endl;
	p = &ch3;
	p->makeFish();
	p->makeSoup();
	ch3.makeFish();
	ch3.makeSoup();
	return 0;
}