//静态成员
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

//this指针
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
//	person& personadd(person& p)//用引用的方式，是传回来的是同一个p2，如果用值传递的方式，则就是拷贝，复制了一份新的p2出来，就不是原来本身p2
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
//	p2.personadd(p1).personadd(p1);//链式反应
//	cout << p2.age << endl;
//}
//int main()
//{
//	test01();
//}

//const修饰
#include<iostream>
using namespace std;
class person
{
public:
	//this指针的本质是 指针常量      person * const this，指针的指向是不可以改变的  但可以改变值的大小
	//const   preson  *const  this  值也不予许改变
	void showperson() const//加在函数后   修饰的是this指针   是this指针的值不可以改变
	{
		m_b = 100;//，常含数中可以改变值例子
		//this->m_a = 100;
		//this = NULL;//this指针是不可以改变指针指向的
	}
	void Func()
	{

	}
	int m_a;
	 mutable int m_b;//是这个值可以在常函数中可以改变
};
void test01()
{
	person p;
}

//常对象
void test02()
{
	const person p2;//不允许修改值
	//p2.m_a=100;//例子
	p2.m_b = 100;//常对象下也可以修改
	//常对象只能调用常函数
	p2.showperson();
	//p2.Func();//无法调用函数
}
int main()

{
	test01();
	return 0;
}