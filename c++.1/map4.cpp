#include<iostream>
#include<map>
using namespace std;
//map���Һ�ͳ��
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	//����
	map<int, int>::iterator pos = m.find(3);//���ص�����
	if (pos != m.end())
	{
		cout << "�鵽��Ԫ�� key= " << (*pos).first<<" value= " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�鵽Ԫ��" << endl;
	}
	//ͳ��
	//multimap������Դ���һ
	int num=m.count(3);//����key����
	cout << num << endl;//���ֻ��1��0
}
int main()
{
	test01();
	return 0;
}