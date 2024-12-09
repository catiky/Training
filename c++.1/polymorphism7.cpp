//������װ
#include<iostream>
using namespace std;
//���������ͬ����
class cpu
{
public:
	//����ļ��㺯��
	virtual void calculator() = 0;
};
class videocard
{
public:
    //�������ʾ����
	virtual void display() = 0;
};
class memory
{
public:
	//����Ĵ��溯��
	virtual void storage() = 0;
};
//������
class computer
{
public:
	//���캯���д������������ָ��
	//�ṩһ�������ĺ��������Ľӿ�
	computer(cpu* c, videocard* v, memory* m)//����ÿ�������ӿ�
	{
		cpu = c;
		vc = v;
		me = m;
	}//����
	//�ṩһ�������ĺ���
	void work()
	{
		cpu->calculator();
		vc->display();
		me->storage();
	}
	//�ṩһ�������������ͷ������������
	~computer()
	{
		//�ͷ�CPU 
		if (cpu != NULL)
		{
			delete cpu;
			cpu = NULL;
		}
		//�ͷ��Կ�
		if (vc != NULL)
		{
			delete vc;
			vc = NULL;
		}
		//�ͷ��ڴ���
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
//����ĳ���
class intelcpu:public cpu
{
public:
	virtual void calculator()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};
class intelvideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class intelmemory :public memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�����ˣ�" << endl;
	}
};
//Lenovo����
class Lenovocpu :public cpu
{
public:
	virtual void calculator()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};
class Lenovovideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class Lenovomemory :public memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�����ˣ�" << endl;
	}
};
void test01()
{
	cout << "��һ̨���Կ�ʼ��װ" << endl;
	//��һ̨���Ե����
	cpu* intelcpu1 = new intelcpu;
	videocard* intelcard = new intelvideocard;
	memory* intelmem = new intelmemory; 
	//������һ̨����
	computer* computer1 = new computer(intelcpu1, intelcard, intelmem);
	computer1->work();
	delete computer1;
	cout << "----------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ��װ" << endl;
	//�ڶ�̨������װ
	computer* computer2 = new computer(new Lenovocpu,new Lenovovideocard,new Lenovomemory);
	computer2->work();
	delete computer2;
	cout << "----------------------------------" << endl;
	cout << "����̨���Կ�ʼ��װ" << endl;
	computer* computer3 = new computer(new Lenovocpu, new intelvideocard, new Lenovomemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	return 0;
}