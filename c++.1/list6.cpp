//list ��ת������
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void printList(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(50);
	l.push_back(80);
	l.push_back(30);
	cout << "��תǰ��" << endl;
	printList(l);
	cout << "��ת��:" <<endl;
	l.reverse();
	printList(l);
	//��ת  ��һ�������һ����λ �����ڶ����͵ڶ�����λ
}
//����
//�ñ�Ϊ����
bool myCompare(int c, int d)
{
	//����  ���õ�һ���� > �ڶ�����
	return c > d;
}
void test02()
{
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(50);
	l.push_back(80);
	l.push_back(30);
	cout << "����ǰ: " << endl;
	printList(l);
	cout << "�����: " << endl;
	l.sort();
	printList(l);
	l.sort(myCompare);//Ĭ�ϴ�С����  ����
	//l.reverse();  �������ת�ɱ�Ϊ����
	printList(l);
    //	sort(l.begin(), l.end());
	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//���в�֧��������ʵ��������������ڲ����ṩ��Ӧ���㷨
}
int main()
{
	//test01();
	test02();
	return 0;
}
