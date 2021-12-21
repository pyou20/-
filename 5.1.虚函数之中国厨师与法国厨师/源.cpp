#include<iostream>
using namespace std;

class Chef {
public:
	void makeFish() {
		cout << "不同的厨师会做不同的鱼" << endl;
	}

	virtual void makeSoup() {
		cout << "不同的厨师会做不同的汤" << endl;
	}
    Chef() {}
};
class ChineseChef:public Chef {
public:
    ChineseChef() {}

	void makeFish() {
		cout << "中国厨师爱做清蒸鱼" << endl;
	}

	void makeSoup() {
		cout << "中国厨师爱做蔬菜汤" << endl;
	}
};

class FrenchChef :public Chef{
public:
    FrenchChef() {};
	void makeFish() {
		cout << "法国厨师爱做烤鱼" << endl;
	}

	void makeSoup() {
		cout << "法国厨师爱做奶油汤" << endl;
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