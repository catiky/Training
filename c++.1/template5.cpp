//类模板与函数模板的区别
//
#include<iostream>
using namespace std;

template<class T1,class T2=int>
class person
{
public:
	person(T1 name, T2 num)
	{
		this->m_name = name;
		this->m_num = num;
	}
	void show()
	{
		cout << this->m_name << " " << this->m_num << endl;;
	}
	T1 m_name;
	T2 m_num;
};
//1.类模板没有自动推导使用的方式
void test01()
{
	//person p1("Mark", 19);错误的
	person<string,int> p1("Mark", 19);
	p1.show();
}
//2.类模板在模板参数列表中可以有默认参数
void test02()
{
	person<string> p2("Mark", 19);//默认T2为Int
	p2.show();
}
int main()
{
	//test01();
	test02();
	return 0;
}