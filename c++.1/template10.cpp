#include <iostream>
using namespace std;
#include <string>
//第一种方法 直接包含源文件
//#include"person.cpp"
// 
// 
// 

//第二中方法，将.h和.cpp写在一起，将后罪名改为.hpp文件
#include"person.hpp";



//放在person.h中
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
// 放在.cpp
// 
////构造函数 类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////成员函数 类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "姓名: " << this->m_Name << " 年龄:" << this->m_Age << endl;
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