//原理
#include<iostream>
using namespace std;
class animal
{
public:
	 virtual void speak()//虚函数
	{
		cout << "动物再说话" << endl;
	}
};
class cat :public animal
{
public:
	virtual void speak()//重写之后 虚指针指向的地址就为现在的猫的地址
	{
		cout << "小猫在说话" << endl;
	}
};

class dog :public animal
{
public:
	virtual void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

void dospeak(animal& animal)
{
	animal.speak();

}
void test01()
{
		cat c;
		dospeak(c);
		dog d;
		dospeak(d);
}
void test02()
{
	cout << sizeof(animal) << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}