//继承中用作用域来使用同名成员
#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		m_a = 100;
	}
	~base()
	{
		//cout << "base析构函数" << endl;
	}
	void Func()
	{
		cout << "base的函数" << endl;
	}
	void Func(int a)
	{
		cout << "base下int a的函数" << endl;
	}
	int m_a;
};
class son :public base
{
public:
	son()
	{
		m_a = 200;
	}
	~son()
	{
		//cout << "son析构函数" << endl;
	}
	void Func()
	{
		cout << "son的函数"<<endl;
	}
	
	int m_a;
};
//同名成员属性的处理方式
void test01()
{
	//base b;
	son s;
	cout << s.m_a<<endl;//son的m_a
	cout << s.base::m_a;//son访问base的 m_a
}
//同名函数的处理方式
void test02()
{
	son s;
	s.Func();
	s.base::Func(100);/*如果子类中出现与父类相同的函数名，
	子类会隐藏该函数，想访问必须加作用域*/
}
int main()
{
	//test01();
	test02();
	return 0;
}