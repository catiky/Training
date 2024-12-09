//虚析构  与    纯虚析构
//总结：
//1.虚析构或纯虚析构就是用来解决父类指针释放子类对象
//2.如果没有堆区数据，可以不写虚析构和纯虚析构
//3.拥有纯虚析构函数的类也属于抽象类
#include<iostream>
#include<string>
using namespace std;
class animal
{
public:
	animal()
	{
		cout << "animal的构造函数" << endl;
	}
	//利用虚析构可以解决子类堆区数据释放不干净
	//virtual ~animal()//改成虚析构，则会走子类的析构函数
	//{
	//	cout << "animal的虚析构函数" << endl;
	//}
	virtual ~animal() = 0;//纯虚析构
	//需要有声明，也需要有实现
	//有了纯虚构用函数，这个类也属于抽象类，无法实例化对象
	virtual void speak() = 0;
	
};
animal::~animal()
{
	cout << "animal的纯虚数析构函数" << endl;
}
class cat :public animal
{
public:
	cat(string name)
	{
		cout << "cat的构造函数" << endl;
		m_name=new string(name);
	}
	~cat()
	{
		cout << "cat的析构函数" << endl;
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
	}
	virtual void speak()
	{
		cout <<*m_name<< "小猫在说话" << endl;
	}
	string *m_name;
};

void test()
{
	animal* a = new cat("Tom");
	a->speak();
	//父类在析构时，不会调用子类中的析构,如果子类有堆区数据则会造成内存泄露
	delete a;
}

int main()
{     
	test();
	return 0;
}