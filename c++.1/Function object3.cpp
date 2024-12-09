#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//二元谓词
class compare
{
public:
	bool operator()(int c,int d)
	{
		return c > d;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	cout << "----------从小到大----------" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//使用函数对象，改变算法测略，变顺序为从大到小
	cout << "-----------从大到小----------" << endl;
	sort(v.begin(), v.end(), compare());
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