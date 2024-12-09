#include<iostream>
#include<set>
using namespace std;

//set容器大小和交换
void printset(set<int>& s)
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
	s.insert(10);
	s.insert(30);
	s.insert(20);
	printset(s);
	//判断是否为空
	if (s.empty())
	{
		cout << "s为空" << endl;
	}
	else
	{
		cout << "s不为空，且大小为：" << s.size() << endl;
	}

	set<int> s2;
	s2.insert(100);
	s2.insert(600);
	s2.insert(400);
	//交换
	cout << "交换前：" << endl;
	printset(s2);
	printset(s);
	s2.swap(s);
	cout << "------------------------" << endl;
	cout << "交换后：" << endl;
	printset(s2);
	printset(s);
}
int main()
{
	test01();
	return 0;
}