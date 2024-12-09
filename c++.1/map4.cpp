#include<iostream>
#include<map>
using namespace std;
//map查找和统计
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	//查找
	map<int, int>::iterator pos = m.find(3);//返回迭代器
	if (pos != m.end())
	{
		cout << "查到了元素 key= " << (*pos).first<<" value= " << (*pos).second << endl;
	}
	else
	{
		cout << "未查到元素" << endl;
	}
	//统计
	//multimap结果可以大于一
	int num=m.count(3);//根据key查找
	cout << num << endl;//结果只有1或0
}
int main()
{
	test01();
	return 0;
}