#include<iostream>
#include<functional>
using namespace std;
//内建仿函数    算术仿函数

//negate   是一个一元仿函数  取反仿函数
void test01()
{
	negate<int> n;
	cout << n(10) << endl;
}
//plus   二元仿函数
void test02()
{
	plus<int> p;//默认传入两个同种类型
	cout << p(10, 20) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}