//在继承中构造与析构
#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout<<" base构造函数"<<endl;
	}
	~base()
	{
		cout << "base析构函数" << endl;
	}
};
class son :public base
{
public:
	son()
	{
		cout << " son构造函数" << endl;
	}
	~son()
	{
		cout << "son析构函数" << endl;
	}
};
void test01()
{
	//base b;
	son s;
}
int main()
{
	test01();
	return 0;
}