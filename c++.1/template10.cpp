#include <iostream>
using namespace std;
#include <string>
//��һ�ַ��� ֱ�Ӱ���Դ�ļ�
//#include"person.cpp"
// 
// 
// 

//�ڶ��з�������.h��.cppд��һ�𣬽���������Ϊ.hpp�ļ�
#include"person.hpp";



//����person.h��
// 
//template<class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//public:
//	T1 m_Name;
//	T2 m_Age;
//};
//
// ����.cpp
// 
////���캯�� ����ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա���� ����ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "����: " << this->m_Name << " ����:" << this->m_Age << endl;
//}
void test01()
{
	Person<string,int> p1("Mark", 219);
	p1.showPerson();
}
int main()
{
	test01();
	return 0;
}