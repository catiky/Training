//queue ���ýӿ�
#include<iostream>
#include<queue>
#include<string>
using namespace std;
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
void test01()
{
	//��������
	queue<person> q;
	//׼������
	person p1("��ɮ",30);
	person p2("�����",1000);
	person p3("��˽�",900);
	person p4("ɳɮ",800);
	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�С: " << q.size() << endl;
	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷ-----" << "���� " << q.front().m_name << "���� " << q.front().m_age << endl;
        //�鿴��β
		cout << "��β-----" << "���� " << q.back().m_name << "���� " << q.back().m_age << endl;
		//����
		q.pop();
	}
	cout << "���д�С: " << q.size() << endl;
}
int main()
{
	test01();
	return 0;
}