//list 反转和排序
#include<iostream>
#include<list>
#include<algorithm>
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
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(50);
	l.push_back(80);
	l.push_back(30);
	cout << "反转前：" << endl;
	printList(l);
	cout << "反转后:" <<endl;
	l.reverse();
	printList(l);
	//反转  第一个和最后一个换位 倒数第二个和第二个换位
}
//排序
//让变为降序
bool myCompare(int c, int d)
{
	//降序  就让第一个数 > 第二个数
	return c > d;
}
void test02()
{
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(50);
	l.push_back(80);
	l.push_back(30);
	cout << "排序前: " << endl;
	printList(l);
	cout << "排序后: " << endl;
	l.sort();
	printList(l);
	l.sort(myCompare);//默认从小到大  升序
	//l.reverse();  先排序后方转可变为降序
	printList(l);
    //	sort(l.begin(), l.end());
	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//所有不支持随机访问迭代器的容器，内部会提供对应的算法
}
int main()
{
	//test01();
	test02();
	return 0;
}
