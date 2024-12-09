//加号运算符重载

/*#include<iostream>
using namespace std;
class person
{
public:
	//利用成员函数加号运算符 
	/*person operator+(person& p)
	{
		person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
	int m_a;
	int m_b;
};
//利用全局函数加号运算符
person operator+(person& p1, person& p2)
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
person operator+(person& p1, int num)
{
	person temp;
	temp.m_a = p1.m_a + num;
	temp.m_b = p1.m_b + num;
	return temp;
}
void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	person p2;
	p2.m_a = 100;
	p2.m_b = 20;
	person p3;
	//成员函数重载本质调用
	//p3 = p1.operator+(p2);
	//全局函数重载本质调用
	//p3 = operator+(p1, p2);
	p3 = p1 + p2;
	//运算符可以发生重载
	//p3 = p1 + 10;//person + int
	cout << p3.m_a << endl;
	cout << p3.m_b << endl;
}
int main()
{
	test01();
	return 0;
}*/


//左移运算符重载
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	//利用成员函数     p.operator<<(cout)
//	//通常不会利用成员函数重载<<运算符，因为无法实现cout在左侧
//	/*void operator<<( cout )
//	{
//
//	}*/
//	int m_a;
//	int m_b;
//};
////只能利用全局函数
//ostream& operator<<(ostream &cout,person &p)//ostream 输出流
//{
//	cout << p.m_a << endl << p.m_b;
//	return cout;
//}
//void test01()
//{
//	person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	
//	cout << p1<<endl ;
//}
//int main()
//{
//	test01();
//	return 0;
//}
// 
// 
// 
// 
//递增运算符
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	friend ostream& operator<<(ostream& cout, person& p);
//	person()
//	{
//		a = 0;
//	}
//	//前置++
//	person& operator++()//放回引用是为了一直对一个数据递增
//	{
//		a++;//先jia
//		return *this;//在返回值
//	}
//	//后置++
//	person operator++(int)//int 是代表占位参数，可以区分前置与后置
//	{
//		person temp = *this;//记录现在的值，让后返回这个值在自加
//		a++;
//		return temp;//先返回原先值    temp变为右值
//	}
//	
//private:
//	int a;
//};
//ostream& operator<<(ostream &out, person &p)//引用强制要求引用左值
//{
//	out << p.a;
//	return out;
//}
//void test01()
//{
//	person p;
//	cout << ++++p<<endl;
//	//cout << p++<<endl;
//	//cout << p++<<endl;
//
//}
//void test02()
//{
//	person p;
//	person p2 = p++;
//	cout << p << endl;
//	//cout << p++;由于temp变为右值，引用要求左值，所以错误
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}



//赋值运算符
#include<iostream>
using namespace std;
class person
{
public:
	person()
	{
		;
	}
	person(int age)
	{
		m_age = new int(age);
	}
	~person()
	{
		if (m_age != NULL)
		{
			delete  m_age;
			m_age = NULL;
		}
		cout << "析出"<<endl;
	}
	int get()
	{
		return *m_age;
	}
	//重载赋值运算符
	person& operator=(person& p)
	{
		//m_age=p.m_age;  编译器提供浅拷贝

		//this->m_age = new int(*p.m_age);//这个可以运行
		//先判段是否有属性  ，如果有释放干净
		if (m_age != NULL)
		{
			delete  m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);
          return *this;
	}

	int* m_age;
	//要返回对象本身
	
};
void test01()
{
	person p1(18);
	person p2;
	person p3(30);
	p3 = p2 = p1;

	/*cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;
	cout << *p3.m_age << endl;*/
	cout << p2.get() << endl;
}
int main()
{
	test01();
	return 0;
}



//关系运算符
//#include<iostream>
//#include<string>
//using namespace std;
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//
//	bool operator==(person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(person& p)
//	{
//		if (this->m_name != p.m_name && this->m_age != p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//void test01()
//{
//	person p1("Tom", 18);
//	person p2("jack", 18);
//	if (p1 == p2)
//	{
//		cout << "same"<<endl;
//	}
//	else
//	{
//		cout << "different"<<endl;
//	}
//	person p3("mack", 28);
//	if (p1 != p3)
//	{
//		cout << "is different"<<endl;
//	}
//	else
//	{
//		cout << "is same"<<endl;
//	}
//	
//}
//int main()
//{
//	test01();
//	return 0;
//}



//函数调用运算符重载
//#include<iostream>
//#include<string>
//using namespace std;
//class person {
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//void person02(string test)
//{
//	cout << test << endl;
//}
//void test01()
//{
//	person p1;
//	p1("hello world");//因为使用起来非常像函数调用，因此成为仿函数
//	person02("helloworld");
//}

//仿函数非常灵活，没有固定的写法
//加法类
//class add
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//void test02()
//{
//	add add;
//	int ret=add(100, 200);
//	cout << ret << endl;
//	//匿名函数
//	cout << ad()(200, 100) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}