#include<iostream>
#include<set>
using namespace std;
//set��multiset����
void test01()
{
	set<int> s1;
	pair<set<int>::iterator,bool> ret=  s1.insert(10);
	s1.insert(20);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}
	ret=s1.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}
	multiset<int> m;
	//�����ظ���������
	m.insert(10);
	m.insert(10);
	for (multiset<int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	return 0;
}