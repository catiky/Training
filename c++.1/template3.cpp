//普通函数与模板函数的区别

#include<iostream>
using namespace std;
//1.普通函数可以调用可以发生隐式类型转换
// 2.函数模板 用自动类型推导，不可以发生隐式类型转换
// 3.函数模板 用显示指定类型 可以发生隐式类型转换 
template<class T>
T myadd(T a, T b)
{
	return a+b;
}

int add(int a, int b)
{
	return a + b;
}
void test01()
{
	int a = 30;
	int b = 29;
	add(a, b);
	cout << a << "+" << b <<"="<<add(a,b)<< endl;
	char c = 'c';
	//普通函数隐式转换  将字符c转换成int型
	cout << a << "+" << c << "=" << add(a, c) << endl;
}
void test02()
{
	int a = 20;
	int b = 22;
	cout << myadd(a, b) << endl;
	char c = 'c';
	//函数模板无法发生隐式转换，无法使用字符
	//显示指定类型 会发生隐式类型转换
	cout << myadd<int>(a, c) << endl;//用自动类型转换可以使用
}
int main()
{
	//test01();
	test02();
	return 0;
}