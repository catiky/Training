//list数据存取
#include<iostream>
#include<list>
using namespace std;
void printList(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	//l[0];   list不可以用[]来访问
	//l.at（0）
	//list 本质是链表 不可以用连续性空间来访问存取数据据
	//迭代器也是不支持随机访问
	cout << "第一个元素为：" << l.front() << endl;
	cout << "第后一个元素为：" << l.back() << endl;
	//迭代器是不支持随机访问
	list<int>::iterator it = l.begin();
	it++;//支持双向
	it--;
	//it = it + 1l;//不支持随机访问

}
int main()
{
	test01();
	return 0;
}
