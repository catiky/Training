//多态实例 饮品制作
#include<iostream>
using namespace std;
class drinking
{
public:
	//煮水
	virtual void boil() = 0;
	//冲泡
	virtual void brew() = 0;
	//倒入杯中
	virtual void  pour() = 0;
	//加入佐料
	virtual void  putsth() = 0;
	//制作饮品
	void drink()
	{
		boil();
		brew();
		pour();
		putsth();
	}
};
//制作咖啡
class  coffee :public drinking
{
public://煮水
	virtual void boil()
	{
		cout << "煮开水" << endl;
	}
	//冲泡
	virtual void brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void  pour()
	{
		cout << "倒入杯中" << endl;
	}
	//加入佐料
	virtual void  putsth()
	{
		cout << "加入糖和牛奶" << endl;
	}
	

};
//制作茶
class  tea :public drinking
{
public://煮水
	virtual void boil()
	{
		cout << "煮矿泉水" << endl;
	}
	//冲泡
	virtual void brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void  pour()
	{
		cout << "倒入杯中" << endl;
	}
	//加入佐料
	virtual void  putsth()
	{
		cout << "加入枸杞" << endl;
	}
};
void dowork(drinking * d)
{
	d->drink();
	delete d;
}
void test01()
{
	//制作咖啡
	coffee c;
	//c.drink();//1,
	dowork(new coffee);//2.
	cout << "---------------------" << endl;
	//制作茶
	tea t;
	//  t.drink();//1.
	dowork(new tea);//2.
}
int main()
{
	test01();
	return 0;
}