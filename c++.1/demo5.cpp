//��̬��Ա
// 
// 
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	static void Func()
//	{
//		 m_c = 20;
//	}
//	static int m_c;
//};
//int person:: m_c = 100;
//void test01()
//{
//	person p;
//	
//	cout <<p.m_c << endl;
//    
//	person p2;
//	p2.m_c = 200;
//	cout <<p.m_c << endl;
//    p.Func();
//	cout <<p.m_c << endl;
//    
//}
//int main()
//{
//	test01();
//	//cout << person::m_c << endl;
//	return 0;
//}
// 
// 
// 
// 
// 
// 

//thisָ��
//
//
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person(int age)
//	{
//		this->age = age;
//	}
//	person& personadd(person& p)//�����õķ�ʽ���Ǵ���������ͬһ��p2�������ֵ���ݵķ�ʽ������ǿ�����������һ���µ�p2�������Ͳ���ԭ������p2
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//void test01()
//{
//	
//	person p1 (18);
//	cout << p1.age << endl;
//	person p2(10);
//	p2.personadd(p1).personadd(p1);//��ʽ��Ӧ
//	cout << p2.age << endl;
//}
//int main()
//{
//	test01();
//}

//const����
#include<iostream>
using namespace std;
class person
{
public:
	//thisָ��ı����� ָ�볣��      person * const this��ָ���ָ���ǲ����Ըı��  �����Ըı�ֵ�Ĵ�С
	//const   preson  *const  this  ֵҲ������ı�
	void showperson() const//���ں�����   ���ε���thisָ��   ��thisָ���ֵ�����Ըı�
	{
		m_b = 100;//���������п��Ըı�ֵ����
		//this->m_a = 100;
		//this = NULL;//thisָ���ǲ����Ըı�ָ��ָ���
	}
	void Func()
	{

	}
	int m_a;
	 mutable int m_b;//�����ֵ�����ڳ������п��Ըı�
};
void test01()
{
	person p;
}

//������
void test02()
{
	const person p2;//�������޸�ֵ
	//p2.m_a=100;//����
	p2.m_b = 100;//��������Ҳ�����޸�
	//������ֻ�ܵ��ó�����
	p2.showperson();
	//p2.Func();//�޷����ú���
}
int main()

{
	test01();
	return 0;
}