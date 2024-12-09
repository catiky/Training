#include<iostream>
#include<string>
using namespace std;
/*####  函数对象使用

**特点：**

* 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 函数对象可以作为参数传递*/
class add
{
public:
	int operator()(int c, int d)
	{
		return c + d;
	}
};
//1. 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
void test01()
{
	add add;
	cout << add(10, 19) << endl;
}
//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
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
	//记录内部状态
	int count;
};
void test02()
{
	print p;
	p("hello world");
	p("hello world");
	cout << "Print调用次数为： " << p.count << endl;
}
//3.函数对象可以作为参数传递
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