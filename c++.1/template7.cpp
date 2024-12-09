//类模板对象做参数函数
#include<iostream>
using namespace std;
template<class T1,class T2>
class person
{
public:
	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << this->m_name << " ";
		cout << this->m_age << endl;
	}
	T1 m_name;
	T2 m_age;
};
//1.指定传入类型
void printperson1(person<string, int>&p1)
{
	p1.showperson();
}
void test01()
{
	person<string, int>p1("Mark",19);
	printperson1(p1);
}
//2.参数模板化
template<class T1,class T2>
void printperson2(person<T1,T2>& p1)
{
	p1.showperson();
}
void test02()
{
	person<string, int>p1("Jack", 19);
	printperson2(p1);
}
//3.整个类模板化
template<class T1>
void printperson3(T1& p1)
{
	p1.showperson();
}
void test03()
{
	person<string, int>p1("Aim", 19);
	printperson3(p1);
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}