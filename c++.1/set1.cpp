
#include<iostream>
#include<set>
using namespace std;\

//set�����Ĺ����븳ֵ
void printset(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> s;
	//��������ֻ��insert��ʽ
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	//��������
	//set�����ص㣺
	//1.����Ԫ���ٲ���ʱ���Զ�����
	//2��set���������������ͬ��Ԫ��   ��������ֻ����һ��
	printset(s);
	//�������졮
	set<int> s1(s);
	printset(s1);

	//��ֵ
	set<int> s2;
	s2 = s;
	printset(s2);
}
int main()
{
	test01();
	return 0;
}