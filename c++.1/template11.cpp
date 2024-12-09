//��ģ������Ԫ
#include<iostream>
#include<string>
using namespace std;
//��ǰ�ñ�����ִ=֪��person�����
template<class T1, class T2>
class person;
//��ǰ֪�����ģ�����
template<class T1, class T2>
void print2(person<T1, T2>& p)
{
	cout << p.m_name << "  " << p.m_age<<endl;
}
template<class T1,class T2>
class person
{
	//ȫ�ֺ���������
	friend void print1(person<T1,T2>& p)
	{
		cout << p.m_name << "  " << p.m_age<<endl;
	}
	//ȫ�ֺ���������
	//�ӿ�ģ������б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void print2<>(person<T1, T2>& p);
public:
	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

//ȫ�ֺ���������
void test01()
{
	person<string, int>p1("Mark", 29);
	print1(p1);
	
}
//ȫ�ֺ���������
void test02()
{
	person<string, int>p2("ketty", 90);
	print2(p2);
}
int main()
{
	test01();
	test02();
	return 0;
}