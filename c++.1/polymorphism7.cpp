//电脑组装
#include<iostream>
using namespace std;
//抽象出来不同的类
class cpu
{
public:
	//抽象的计算函数
	virtual void calculator() = 0;
};
class videocard
{
public:
    //抽象的显示函数
	virtual void display() = 0;
};
class memory
{
public:
	//抽象的储存函数
	virtual void storage() = 0;
};
//电脑类
class computer
{
public:
	//构造函数中传入三个零件的指针
	//提供一个工作的函数工作的接口
	computer(cpu* c, videocard* v, memory* m)//调用每个函数接口
	{
		cpu = c;
		vc = v;
		me = m;
	}//接收
	//提供一个工作的函数
	void work()
	{
		cpu->calculator();
		vc->display();
		me->storage();
	}
	//提供一个析构函数来释放三个电脑零件
	~computer()
	{
		//释放CPU 
		if (cpu != NULL)
		{
			delete cpu;
			cpu = NULL;
		}
		//释放显卡
		if (vc != NULL)
		{
			delete vc;
			vc = NULL;
		}
		//释放内存条
		if (me != NULL)
		{
			delete me;
			me = NULL;
		}
	}
private:
	cpu* cpu;
	videocard* vc;
	memory* me;
};
//具体的厂商
class intelcpu:public cpu
{
public:
	virtual void calculator()
	{
		cout << "Intel的CPU开始计算了！" << endl;
	}
};
class intelvideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};
class intelmemory :public memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始储存了！" << endl;
	}
};
//Lenovo厂商
class Lenovocpu :public cpu
{
public:
	virtual void calculator()
	{
		cout << "Lenovo的CPU开始计算了！" << endl;
	}
};
class Lenovovideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl;
	}
};
class Lenovomemory :public memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始储存了！" << endl;
	}
};
void test01()
{
	cout << "第一台电脑开始组装" << endl;
	//第一台电脑的零件
	cpu* intelcpu1 = new intelcpu;
	videocard* intelcard = new intelvideocard;
	memory* intelmem = new intelmemory; 
	//创建第一台电脑
	computer* computer1 = new computer(intelcpu1, intelcard, intelmem);
	computer1->work();
	delete computer1;
	cout << "----------------------------------" << endl;
	cout << "第二台电脑开始组装" << endl;
	//第二台电脑组装
	computer* computer2 = new computer(new Lenovocpu,new Lenovovideocard,new Lenovomemory);
	computer2->work();
	delete computer2;
	cout << "----------------------------------" << endl;
	cout << "第三台电脑开始组装" << endl;
	computer* computer3 = new computer(new Lenovocpu, new intelvideocard, new Lenovomemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	return 0;
}