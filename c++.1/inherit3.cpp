//�̳�������������ʹ��ͬ����Ա
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
		//cout << "base��������" << endl;
	}
	void Func()
	{
		cout << "base�ĺ���" << endl;
	}
	void Func(int a)
	{
		cout << "base��int a�ĺ���" << endl;
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
		//cout << "son��������" << endl;
	}
	void Func()
	{
		cout << "son�ĺ���"<<endl;
	}
	
	int m_a;
};
//ͬ����Ա���ԵĴ���ʽ
void test01()
{
	//base b;
	son s;
	cout << s.m_a<<endl;//son��m_a
	cout << s.base::m_a;//son����base�� m_a
}
//ͬ�������Ĵ���ʽ
void test02()
{
	son s;
	s.Func();
	s.base::Func(100);/*��������г����븸����ͬ�ĺ�������
	��������ظú���������ʱ����������*/
}
int main()
{
	//test01();
	test02();
	return 0;
}