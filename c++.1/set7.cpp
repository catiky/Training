#include<iostream>
#include<set>
using namespace std;
//set容器排序 1 set存放内置数据类型
class compare
{
public:
	//函数被用作STL容器的比较函数时，我们希望该函数不会修改对象的状态，因为这可能会导致容器的行为不可预测。因此，为了保证该函数不会修改对象的状态，需要在函数声明后加上const
	bool operator()(int c,int d) const
	{
		return c > d;
	}
};

void test01()
{
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	 for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//指定排序规则 从大到小
	//利用仿函数
	set<int,compare> s2;

	s2.insert(10);
	s2.insert(30);
	s2.insert(20);
	for (set<int,compare>::iterator it = s2.begin(); it != s2.end(); it++)
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