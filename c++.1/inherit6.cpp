//菱形继承
#include<iostream>
using namespace std;
class bb
{
public:
	/*bb()
	{
		m_g = 0;
	}*/
	
	int m_g;
};
//利用虚继承 解决菱形继承的问题
//继承之前 加上关键字 virtual 变为虚继承
//bb成为虚基类
class base1:virtual public bb
{
public:
	/*base1()
	{
		m_a = 100;
	}*/
	int m_a;
};
class base2:virtual public bb
{
public:
	/*base2()
	{
		m_b = 200;
	}*/
	int m_b;
};

class son : public base1, public base2
{
public:
	/*son()
	{
		m_c = 20;
	}*/
	int m_c;
};
void test01()
{
	son s;
	base1 b;
	base2 a;
	bb c;
	//当菱形继承时，两个父类有相同的数据，需要加作用域区分
	///s.base1::m_g = 199;
	//s.base2::m_g = 1998;//虚继承后将前面数据覆盖
	/*base1 b;
	b.bb::bb(199);
	base2 p;
	p.bb::bb(123);*/
	/*cout << s.m_a << endl;
	cout << s.m_b << endl;
	cout << s.m_c<< endl;
	cout << s.m_g<< endl;*/

	cout << sizeof(a)<< endl;
	cout << sizeof(c)<< endl;
	cout << sizeof(b)<< endl;
	cout << sizeof(s)<< endl;
	//未加之前
	//cout << s.base1::m_g << endl;
	//cout << s.base2::m_g << endl;
	//这份数据我们只要一份就可以，两份就造成浪费

}
int main()
{
	test01();
	return 0;
}