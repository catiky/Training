//����๲ͬʹ��
#include<iostream>
#include<string>
using  namespace std;
class phone
{
public:
	phone(string p_name) :m_name(p_name)
	{

	}
	string  m_name;
};
class person
{
public:
	person(string name,string pname) :n_name(name),m_phone(pname)
	{

	}
public:
	string n_name;
	phone m_phone;
};
void test01()
{
	person p("����", "ƻ��MAX");
	cout << p.n_name << "����" << p.m_phone.m_name<<endl;
}  
int main()
{
	test01();
	system("pause");
	return 0;
}
