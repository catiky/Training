//������  ��    ��������
//�ܽ᣺
//1.�����������������������������ָ���ͷ��������
//2.���û�ж������ݣ����Բ�д�������ʹ�������
//3.ӵ�д���������������Ҳ���ڳ�����
#include<iostream>
#include<string>
using namespace std;
class animal
{
public:
	animal()
	{
		cout << "animal�Ĺ��캯��" << endl;
	}
	//�������������Խ��������������ͷŲ��ɾ�
	//virtual ~animal()//�ĳ���������������������������
	//{
	//	cout << "animal������������" << endl;
	//}
	virtual ~animal() = 0;//��������
	//��Ҫ��������Ҳ��Ҫ��ʵ��
	//���˴��鹹�ú����������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual void speak() = 0;
	
};
animal::~animal()
{
	cout << "animal�Ĵ�������������" << endl;
}
class cat :public animal
{
public:
	cat(string name)
	{
		cout << "cat�Ĺ��캯��" << endl;
		m_name=new string(name);
	}
	~cat()
	{
		cout << "cat����������" << endl;
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
	}
	virtual void speak()
	{
		cout <<*m_name<< "Сè��˵��" << endl;
	}
	string *m_name;
};

void test()
{
	animal* a = new cat("Tom");
	a->speak();
	//����������ʱ��������������е�����,��������ж��������������ڴ�й¶
	delete a;
}

int main()
{     
	test();
	return 0;
}