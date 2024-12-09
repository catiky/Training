#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
//       关系仿函数
class compare
{
public:
	bool operator()(int c, int d)
	{
		return c > d;
	}
};
void test01()
{
	//自己实现从大到小
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	sort(v.begin(), v.end(), compare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//利用关系仿函数实现
	cout << "------------------------------------" << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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