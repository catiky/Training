#include<iostream>
#include<set>
using namespace std;

//set������С�ͽ���
void printset(set<int>& s)
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
	s.insert(10);
	s.insert(30);
	s.insert(20);
	printset(s);
	//�ж��Ƿ�Ϊ��
	if (s.empty())
	{
		cout << "sΪ��" << endl;
	}
	else
	{
		cout << "s��Ϊ�գ��Ҵ�СΪ��" << s.size() << endl;
	}

	set<int> s2;
	s2.insert(100);
	s2.insert(600);
	s2.insert(400);
	//����
	cout << "����ǰ��" << endl;
	printset(s2);
	printset(s);
	s2.swap(s);
	cout << "------------------------" << endl;
	cout << "������" << endl;
	printset(s2);
	printset(s);
}
int main()
{
	test01();
	return 0;
}