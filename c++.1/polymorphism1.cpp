//多态介绍，以及如何使用
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
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
// 执行说话的函数
// 地址早绑定，在编译阶段确定函数地址
//如果先要猫说话，那么这地址要再运行阶段绑定，地址晚绑定
class dog :public animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//动态多态满足条件
//1.要有继承关系
//2. 子类要重写父类虚函数 重写  函数返回值类型  函数名  参数列表 
//完全相同
//多态使用
//父类指针或引用指向子类对象
void dospeak(animal&animal)//animal &animal = cat 父类直接指向子类
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
int main()
{
	test01();
	return 0;
}