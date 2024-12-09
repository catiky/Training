#include<iostream>
#include<set>
#include<string>
using namespace std;
// set��������   2 set����Զ�����������
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};
class compare
{
public:
	//Ҫ�ô�const���� ��ֹ�޸�ֵ
	bool operator()(person p1,person p2) const
	{
		return p1.m_age < p2.m_age;//��������䣬�������һ�� ����������ͬ����ʧһ��
	}
		
};
void test01()
{
	set<person,compare> s;
	//����person����
	person p1("����", 23);
	person p2("����", 27);
	person p3("�ŷ�", 25);
	person p4("����", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<person,compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << it->m_name << " ���䣺" << it->m_age << endl;
	}

}
int main()
{
	test01();
	return 0;
}