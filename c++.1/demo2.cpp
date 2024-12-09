#include<iostream>
using namespace std;
//深拷贝与浅拷贝
class person
{
public:
	person()
	{
		cout << "person的无参构造函数" << endl;
	}
	person(int age,int height)
	{
		m_age = age;
		cout << "person的有参构造函数" << endl;
		//m_height=p.height   系统默认  p2释放完后，，堆区数据已经被释放 p1在释放时 会发生错误
		m_height = new int (height);//便于p1与p2释放推区数据
	}
	person(const person& p)
	{
		m_age = p.m_age;
		m_height = new int(*p.m_height);
		cout << "person的拷贝有参构造函数" << endl;

	}
	~person()
	{
		//释放堆区数据
		if (m_height = NULL)
		{
			delete m_height;
		}
		cout << "person的析构函数" << endl;
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
	cout <<"年龄"<< p1.m_age << endl <<"身高" << *p1.m_height << endl;
	person p2(p1);
	cout <<"年龄"<< p2.m_age << endl <<"身高"<< *p2.m_height << endl;
	//释放采取先进后退
}
int main()
{
	test02();
}