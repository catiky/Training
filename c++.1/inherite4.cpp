//ͬ����̬��Ա����
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
//ͬ����̬��Ա
void test01()
{
	//ͨ���������
	/*son s;
	cout << s.m_a << endl;
	cout << s.base::m_a << endl;*/
	//ͨ����������
	son s;
	cout << son::m_a << endl;
	cout << son::base::m_a << endl;
}
//ͬ����̬����
void test02()
{
	// ͨ���������
	son s;
	//s.Func();
	//s.base::Func();
	//ͨ����������
	son::Func();
	son::base::Func();
}
int main()
{
	//test01();
	test02();
	return 0;
}