#include<iostream>
using namespace std;
class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son:public base
{
public:
	int m_d;
};
void test01()
{
	cout << sizeof(son) << endl;//16个字节，尽管m_c不可访问被隐藏，但也被继承
}
int main()
{
	test01();
	return 0;
}