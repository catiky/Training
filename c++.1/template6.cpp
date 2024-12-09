//类模板中成员函数创建时机
//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建
#include<iostream>
using namespace std;
class person1
{
public:
	void showperson1()
	{
		cout << "Person1 show" << endl;
	}
};
class person2
{
public:
	void showperson2()
	{
		cout << "Person2 show" << endl;
	}
};
template<class T>
class myclass
{
public:
	T a;
	void Func1()
	{
		a.showperson1();
	}
	void Func2()
	{
		a.showperson2();
	}
};
void test01()
{
	myclass<person1> m;
	m.Func1();//当T的类型是p1时，可以调用p1的函数
	m.Func2();//当T的类型是p2时，可以调用p2的函数
}
int main()
{
	test01();
	return 0;
}