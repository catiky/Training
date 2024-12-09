#include<iostream>
#include<map>
using namespace std; 
//map��С�ͽ���
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
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	if (m.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ�գ�������СΪ��" << m.size() << endl;
	}
}
//����
void test02()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	map<int, int> m2;
	m2.insert(pair<int, int>(4, 108));
	m2.insert(pair<int, int>(6, 209));
	m2.insert(pair<int, int>(7, 306));
	cout << "����ǰ" << endl;
	printmap(m);
	printmap(m2);
	cout << "---------------------------" << endl;
	m2.swap(m);
	cout << "������" << endl;
	printmap(m);
	printmap(m2);
}
int main()
{
	//test01();
	test02();
	return 0;
}