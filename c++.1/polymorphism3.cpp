//计算机实例来体现多态
#include<iostream>
#include<string>
using namespace std;
//分别利用普通写法和多态技术实现计算器
class calculator
{
public:
	int getresult(string oper)
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
		//如果想拓展新的功能，需要修改源码
		//开发中提倡开闭原则
		//开闭原则： 对拓展进行开放，对修改进行关闭
	}
	int m_num1;
	int m_num2;
};
void test01()
{
	calculator c;
	c.m_num1 = 10;
	c.m_num2 = 110;
	cout << c.m_num1 << " + " << c.m_num2 << " =  " << c.getresult("+") << endl;
	cout << c.m_num1 << " - " << c.m_num2 << " =  " << c.getresult("-") << endl;
	cout << c.m_num1 << " * " << c.m_num2 << " =  " << c.getresult("*") << endl;
}
//利用多态来实现
//先实现计算机的基类（抽象类）
//优点：
//1.组织结构清晰
//2.可读性强
//3.对于前期和后期拓展以及维护性高
class abstart
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int m_num1;
	int m_num2;
};
//实现加法计算机的类
class add:public abstart
{
public:
	 int getresult()
	{
		return m_num1+m_num2;
	}
};
//实现减法计算机的类
class sub :public abstart
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//实现乘法计算机的类
class mul :public abstart
{
public:
	int getresult()
	{
		return m_num1 * m_num2;
	}
};
void test02()
{
	
		//多态使用条件
		//父类指针或者引用指向子类对象
		//加法运算
		abstart* abc = new add;
		abc->m_num1 = 10;
		abc->m_num2 = 20;
		cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getresult() << endl;
		//用完后要销毁
		delete abc;
		//减法运算
		abc = new sub;
		abc->m_num1 = 10;
		abc->m_num2 = 20;
		cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getresult() << endl;
		delete abc;
		//乘法运算
		abc = new mul;
		abc->m_num1 = 10;
		abc->m_num2 = 20;
		cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getresult() << endl;
		delete abc;
	
}
int main()
{
	//test01();
	test02();
	return 0;
}