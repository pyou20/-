
#include<iostream>
using namespace std;
/*
	���������Ե����������ʹ��
	����������ֱ�Ӹ�ֵ���������
	����������ֱ�ӳ�ʼ���������
	����ָ�����ֱ��ָ���������
	�������ÿ���ֱ�������������
	*/
	//�����������ĸ���
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
	//�ֱ��常����� ����ָ�� �������� child
	Parent parent = child;
	Parent* pp = &child;
	Parent& rp = child;

	parent.print();
	pp->print();
	rp.print();
	system("pause");
	return 0;
}