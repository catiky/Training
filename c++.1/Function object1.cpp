#include<iostream>
#include<string>
using namespace std;
/*####  ��������ʹ��

**�ص㣺**

* ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
* �������󳬳���ͨ�����ĸ����������������Լ���״̬
* �������������Ϊ��������*/
class add
{
public:
	int operator()(int c, int d)
	{
		return c + d;
	}
};
//1. ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
void test01()
{
	add add;
	cout << add(10, 19) << endl;
}
//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
class print
{
public:
	print()
	{
		this->count=0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	//��¼�ڲ�״̬
	int count;
};
void test02()
{
	print p;
	p("hello world");
	p("hello world");
	cout << "Print���ô���Ϊ�� " << p.count << endl;
}
//3.�������������Ϊ��������
void myprint(print& p, string test)
{
	p(test);
}
void test03()
{
	print p1;
	myprint(p1, "hello c++");
}
int main()
{
	//test01();
	test02();
	test03();
	return 0;
}