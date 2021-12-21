
#include<iostream>
using namespace std;
/*
	子类对象可以当作父类对象使用
	子类对象可以直接赋值给父类对象
	子类对象可以直接初始化父类对象
	父类指针可以直接指向子类对象
	父类引用可以直接引用子类对象
	*/
	//子类就是特殊的父类
class Parent
{
protected:
	const char* name;
public:
	Parent()
	{
		name = "Parent";
	}

	void print()
	{
		cout << "Name: " << name << endl;
	}
};

class Child : public Parent
{
protected:
	int i;
public:
	Child(int i)
	{
		this->name = "Child";
		this->i = i;
	}
};

int main()
{
	Child child(1000);
	//分别定义父类对象 父类指针 父类引用 child
	Parent parent = child;
	Parent* pp = &child;
	Parent& rp = child;

	parent.print();
	pp->print();
	rp.print();
	system("pause");
	return 0;
}