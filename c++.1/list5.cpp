//list���ݴ�ȡ
#include<iostream>
#include<list>
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
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	//l[0];   list��������[]������
	//l.at��0��
	//list ���������� �������������Կռ������ʴ�ȡ���ݾ�
	//������Ҳ�ǲ�֧���������
	cout << "��һ��Ԫ��Ϊ��" << l.front() << endl;
	cout << "�ں�һ��Ԫ��Ϊ��" << l.back() << endl;
	//�������ǲ�֧���������
	list<int>::iterator it = l.begin();
	it++;//֧��˫��
	it--;
	//it = it + 1l;//��֧���������

}
int main()
{
	test01();
	return 0;
}
