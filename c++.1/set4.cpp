#include<iostream>
#include<set>
using namespace std;
//set�Ĳ�����ͳ��

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);

	//����
	//��Ϊfind���ص��ǵ����� ����ҵ��򷵻� δ�ҵ��򷵻�λ��end
	set<int>::iterator pos=s1.find(20);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ� " << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}


	
}
//ͳ��
void test02()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	int num = s1.count(20);
	//����set���� ͳ�ƵĽ��ֻ��1��2
	cout << num << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}