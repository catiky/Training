//类模板与友元
#include<iostream>
#include<string>
using namespace std;
//提前让编译器执=知道person类存在
template<class T1, class T2>
class person;
//提前知道这个模板存在
template<class T1, class T2>
void print2(person<T1, T2>& p)
{
	cout << p.m_name << "  " << p.m_age<<endl;
}
template<class T1,class T2>
class person
{
	//全局函数在类内
	friend void print1(person<T1,T2>& p)
	{
		cout << p.m_name << "  " << p.m_age<<endl;
	}
	//全局函数在类外
	//加空模板参数列表
	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
	friend void print2<>(person<T1, T2>& p);
public:
	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

//全局函数在类内
void test01()
{
	person<string, int>p1("Mark", 29);
	print1(p1);
	
}
//全局函数在类外
void test02()
{
	person<string, int>p2("ketty", 90);
	print2(p2);
}
int main()
{
	test01();
	test02();
	return 0;
}