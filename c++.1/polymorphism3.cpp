//�����ʵ�������ֶ�̬
#include<iostream>
#include<string>
using namespace std;
//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
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
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
		//�������ᳫ����ԭ��
		//����ԭ�� ����չ���п��ţ����޸Ľ��йر�
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
//���ö�̬��ʵ��
//��ʵ�ּ�����Ļ��ࣨ�����ࣩ
//�ŵ㣺
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
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
//ʵ�ּӷ����������
class add:public abstart
{
public:
	 int getresult()
	{
		return m_num1+m_num2;
	}
};
//ʵ�ּ������������
class sub :public abstart
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//ʵ�ֳ˷����������
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
	
		//��̬ʹ������
		//����ָ���������ָ���������
		//�ӷ�����
		abstart* abc = new add;
		abc->m_num1 = 10;
		abc->m_num2 = 20;
		cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getresult() << endl;
		//�����Ҫ����
		delete abc;
		//��������
		abc = new sub;
		abc->m_num1 = 10;
		abc->m_num2 = 20;
		cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getresult() << endl;
		delete abc;
		//�˷�����
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