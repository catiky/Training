// vector存放内置数据类型
#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;
void print(int val)
{
	cout << val << endl;
}
void test01()
{
	//创建了一个vector容器
	vector<int> v;
	//向容器放数
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
     //第一种遍历方式
	//通过迭代器来访问容器中的数据
	//vector<int>::iterator itBegin = v.begin();//起始迭代器
	//指向容器中的第一个元素
	//vector<int>::iterator itEnd = v.end();//结束迭代器
	//指向容器中的最后一个元素的下一个位置
	
	/*while (itBegin != itEnd)
	{
		cout <<* itBegin << endl;
		itBegin++;
	}*/
	//第二种遍历方式
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/
	//第三种遍历方式   利用STL提供遍历算法
	for_each(v.begin(), v.end(), print);
}

int main()
{
	test01();
	return 0;
}