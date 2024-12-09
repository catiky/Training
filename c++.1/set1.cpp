
#include<iostream>
#include<set>
using namespace std;\

//set容器的构造与赋值
void printset(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> s;
	//插入数据只有insert方式
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	//遍历容器
	//set容器特点：
	//1.所有元素再插入时会自动排序
	//2。set容器不允许插入相同的元素   如果有则会只保存一个
	printset(s);
	//拷贝构造‘
	set<int> s1(s);
	printset(s1);

	//赋值
	set<int> s2;
	s2 = s;
	printset(s2);
}
int main()
{
	test01();
	return 0;
}