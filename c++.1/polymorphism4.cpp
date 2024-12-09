//纯虚数与抽象类
#include<iostream>
using namespace std;
class  base
{
public:
	virtual void Func() = 0;//纯虚函数
	//这个类只要有纯虚数，这个类就被称为抽象类
	//特点：1.无法实例化对象
	//抽象类的子类必须要重写父类中的纯虚数，否则也为抽象类
};
class son:public base
{
public:
	virtual void Func()//重写
	{
		cout << "func调用" << endl;
	}
};
void test01()
{
	//base b;//无法实例化对象
	//new  b;
	//son s;未重写
	son s;//子类必须重写，否则无法实例化
	s.Func();
}
int main()
{
	test01();
	return 0;
}