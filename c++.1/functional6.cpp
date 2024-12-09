#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
//                     逻辑仿函数
//logical_mot   逻辑非
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//利用逻辑非将容器搬运到容器v2中,并执行取反操作
	vector<bool> v2;
	v2.resize(4);
	//这是搬运算法 但搬运之前必须要提前去开辟空间，否则无法搬运
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	//原容器的起始迭代器和结束迭代器。到要搬运的迭代器，后可加一个函数
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	return 0;
}