//list������ �����Զ�����������������
#include<iostream>
#include<list>
#include<string>
using namespace std;
//������������������������ͬ������߽��н���
class person
{
public:
	person(string name, int age, int height)
	{
		m_name = name;
		m_age = age;
		m_height = height;
	}
	string m_name;//����
	int m_age;//����
	int m_height;//���
};
//�������
bool compare(person p1, person p2)
{
	if (p1.m_age != p2.m_age)
	{
		return p1.m_age < p2.m_age;
	}
	else
	{
		return p1.m_height > p2.m_height;
	}
}
void test01()
{
	//��������
	list<person> l;
	//׼������
	person p1("����", 35, 175);
	person p2("�ܲ�", 45, 180);
	person p3("��Ȩ", 40, 170);
	person p4("����", 25, 190);
	person p5("�ŷ�", 35, 160);
	person p6("����", 35, 200);
	//��������
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);
	cout << "����ǰ" << endl;
	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << " ������" << (*it).m_name << " ���䣺" << (*it).m_age << " ��ߣ�" << (*it).m_height<<endl;
	}
	//�����
	cout << "----------------------------------" << endl;
	cout << "�����" << endl;
	l.sort(compare);
	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << " ������" << (*it).m_name << " ���䣺" << (*it).m_age << " ��ߣ�" << (*it).m_height << endl;
	}
}
int main()
{
	test01();
	return 0;
}
