#include<iostream>
#include<set>
using namespace std;
//set�������� 1 set���������������
class compare
{
public:
	//����������STL�����ıȽϺ���ʱ������ϣ���ú��������޸Ķ����״̬����Ϊ����ܻᵼ����������Ϊ����Ԥ�⡣��ˣ�Ϊ�˱�֤�ú��������޸Ķ����״̬����Ҫ�ں������������const
	bool operator()(int c,int d) const
	{
		return c > d;
	}
};

void test01()
{
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	 for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//ָ��������� �Ӵ�С
	//���÷º���
	set<int,compare> s2;

	s2.insert(10);
	s2.insert(30);
	s2.insert(20);
	for (set<int,compare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	return 0;
}