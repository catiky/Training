// vector���������������
#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;
void print(int val)
{
	cout << val << endl;
}
void test01()
{
	//������һ��vector����
	vector<int> v;
	//����������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
     //��һ�ֱ�����ʽ
	//ͨ�������������������е�����
	//vector<int>::iterator itBegin = v.begin();//��ʼ������
	//ָ�������еĵ�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();//����������
	//ָ�������е����һ��Ԫ�ص���һ��λ��
	
	/*while (itBegin != itEnd)
	{
		cout <<* itBegin << endl;
		itBegin++;
	}*/
	//�ڶ��ֱ�����ʽ
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/
	//�����ֱ�����ʽ   ����STL�ṩ�����㷨
	for_each(v.begin(), v.end(), print);
}

int main()
{
	test01();
	return 0;
}