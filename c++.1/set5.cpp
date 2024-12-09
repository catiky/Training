#include<iostream>
#include<set>
using namespace std;
//set与multiset区别
void test01()
{
	set<int> s1;
	pair<set<int>::iterator,bool> ret=  s1.insert(10);
	s1.insert(20);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}
	ret=s1.insert(10);
	if (ret.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}
	multiset<int> m;
	//可以重复插入数据
	m.insert(10);
	m.insert(10);
	for (multiset<int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	return 0;
}