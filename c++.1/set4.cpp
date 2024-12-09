#include<iostream>
#include<set>
using namespace std;
//set的查找与统计

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);

	//查找
	//因为find返回的是迭代器 如果找到则返回 未找到则返回位置end
	set<int>::iterator pos=s1.find(20);
	if (pos != s1.end())
	{
		cout << "找到元素： " << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}


	
}
//统计
void test02()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	int num = s1.count(20);
	//对于set而言 统计的结果只有1或2
	cout << num << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}