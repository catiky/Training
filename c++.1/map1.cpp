#include<iostream>
#include<map>
using namespace std;
//  map构造和赋值
void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " ";
		cout << "value: " << it->second << endl;
	}
	cout << endl;
}
void test01()
{
	//默认构造
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));//前面数为key，后面为value实值
	m.insert(pair<int, int>(2, 20));//插入时要用对组
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 50));//key值不可以重复 如果重复则自动删去
	printmap(m);//输出是按照key来排序
	//拷贝构造
	map<int, int> m2(m);
	printmap(m2);
	//赋值
	map<int, int> m3;
	m3 = m2;
	printmap(m3);
}
int main()
{
	test01();
	return 0;
}