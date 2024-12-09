//同名静态成员处理
#include<iostream>
using namespace std;
class base
{
public:
	static void Func()
	{
		cout << "base"<<endl;
	}
	static int m_a;
};
int base::m_a = 10;
class son :public base
{
public:
	static void Func()
	{
		cout << "son"<<endl;
	}
	static int m_a;
};

int son::m_a=20;
//同名静态成员
void test01()
{
	//通过对象访问
	/*son s;
	cout << s.m_a << endl;
	cout << s.base::m_a << endl;*/
	//通过类名访问
	son s;
	cout << son::m_a << endl;
	cout << son::base::m_a << endl;
}
//同名静态函数
void test02()
{
	// 通过对象访问
	son s;
	//s.Func();
	//s.base::Func();
	//通过类名访问
	son::Func();
	son::base::Func();
}
int main()
{
	//test01();
	test02();
	return 0;
}