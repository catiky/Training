//函数模板基本语法
#include<iostream>
using namespace std;
void swapInt(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void swapdouble(double& a, double& b)
{
	double t = a;
	a = b;
	b = t;
}
//函数模板
//声名一个模板，告诉编译器后面的代码不要报错，
//T是一个通用的数据类型
template<typename T>//typename可以用class替换
void myswap(T&a,T&b)
{
	T t = a;
	a = b;
	b = t;
}
void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//两种方法使用函数模板
	//1.自动类型推导,必须推导出一致的数据类型T才可以使用、
	// 必须要确定T的类型，才可以使用
	//myswap(a, b);
	//2.显示指定类型
	myswap<int>(a, b);
	double g = 2.33;
	myswap(a.g);//数据类型不一样不可以使用
	cout << a << endl << b << endl;
	double c = 2.12;
	double d = 3.21;
	swapdouble(c, d);
	cout << c << endl << d << endl;
}
//模板必须要有确定的数据类型，才能使用
template<class T>
void Func()
{
	cout << "Func调用" << endl;
}
void test02()
{
	Func<int>();//加一个数据类型就可以使用
}
int main()
{
	//test01();
	test02();
	return 0;
}