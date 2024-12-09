#include<iostream>
#include<map>
using namespace std;
//map插入和删除
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
	map<int, int> m;
	//插入
	//第一种
	m.insert(pair<int, int>(1, 10));
	//第二种
	m.insert(make_pair(2, 20));
	//第三种
	m.insert(map<int, int>::value_type(3, 30));
	//第四种
	m[4] = 40;
	//不建议插入，可以利用ket来访问value
	 cout<<m[2]<<endl;
	//cout << m[5] << endl;//如果查找没有创建的数，则会自动创建一个值为0的pair
	printmap(m);
	//删除
	m.erase(m.begin());
	printmap(m);
	m.erase(3);//按照key为3    删除key为3
	printmap(m);

	//清空
	//m.erase(m.begin(), m.end());
	m.clear();
	printmap(m);
}
int main()
{
	test01();
	return 0;
}