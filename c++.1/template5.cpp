//��ģ���뺯��ģ�������
//
#include<iostream>
using namespace std;

template<class T1,class T2=int>
class person
{
public:
	person(T1 name, T2 num)
	{
		this->m_name = name;
		this->m_num = num;
	}
	void show()
	{
		cout << this->m_name << " " << this->m_num << endl;;
	}
	T1 m_name;
	T2 m_num;
};
//1.��ģ��û���Զ��Ƶ�ʹ�õķ�ʽ
void test01()
{
	//person p1("Mark", 19);�����
	person<string,int> p1("Mark", 19);
	p1.show();
}
//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	person<string> p2("Mark", 19);//Ĭ��T2ΪInt
	p2.show();
}
int main()
{
	//test01();
	test02();
	return 0;
}