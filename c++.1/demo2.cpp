#include<iostream>
using namespace std;
//�����ǳ����
class person
{
public:
	person()
	{
		cout << "person���޲ι��캯��" << endl;
	}
	person(int age,int height)
	{
		m_age = age;
		cout << "person���вι��캯��" << endl;
		//m_height=p.height   ϵͳĬ��  p2�ͷ���󣬣����������Ѿ����ͷ� p1���ͷ�ʱ �ᷢ������
		m_height = new int (height);//����p1��p2�ͷ���������
	}
	person(const person& p)
	{
		m_age = p.m_age;
		m_height = new int(*p.m_height);
		cout << "person�Ŀ����вι��캯��" << endl;

	}
	~person()
	{
		//�ͷŶ�������
		if (m_height = NULL)
		{
			delete m_height;
		}
		cout << "person����������" << endl;
	}
	int m_age;
	int* m_height;
};
void test1()
{
	/*person p1;
	person p2(10);
	person p3(p2);
	cout << p2.age << endl;
	cout << p3.age << endl;*/
	/*person p1;
	person p2=10;
	person p3=p2;*/
	
}
void dowork(person p)
{
	//int m_age = p.m_age;
}
void test2()
{ 
	//person p1;
	//dowork(p1);
}
void test01()
{
	//person p0;
	//p0.m_age = 18;
	//person p2(p0);
	//cout << p2.m_age << endl;
}
void test02()
{
	person p1(18,160);
	cout <<"����"<< p1.m_age << endl <<"���" << *p1.m_height << endl;
	person p2(p1);
	cout <<"����"<< p2.m_age << endl <<"���"<< *p2.m_height << endl;
	//�ͷŲ�ȡ�Ƚ�����
}
int main()
{
	test02();
}