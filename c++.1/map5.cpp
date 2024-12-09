#include<iostream>
#include<map>
using namespace std;
//map容器排序
//map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则
class compare
{
public:
	bool operator()(int c,int d)const//因为map是对key进行排列，所以只需key的类型来进行排列
	{
		return c > d;
	}
};
void test01()
{
	map<int, int,compare> m;//加上仿函数，可以降序排列
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	for (map<int, int,compare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " ";
		cout << "value: " << it->second << endl;
	}

}
int main()
{
	test01();
	return 0;
}