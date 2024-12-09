//多继承语法
#include<iostream>
using namespace std;
class base1
{
public:
	base1()
	{
		m_a = 100;
	}
	int m_a;
};
class base2
{
public:
	base2()
	{
		m_a = 200;
	}
	int m_a;
};
//子类继承父类1和2
class son :public base1,public base2
{
public:
	son()
	{
		m_c = 20;
		m_d = 10;
	}
	int m_c;
	int m_d;
};
void test01()
{
	son s;
	cout << sizeof(son) << endl; 
	cout << s.m_c << endl;
	cout << s.m_d << endl;
	//如果有重名 要加作用域
	cout << s.base1::m_a << endl;
	cout << s.base2::m_a << endl;
}
int main()
{
	test01();
	return 0;
}