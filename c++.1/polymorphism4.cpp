//�������������
#include<iostream>
using namespace std;
class  base
{
public:
	virtual void Func() = 0;//���麯��
	//�����ֻҪ�д������������ͱ���Ϊ������
	//�ص㣺1.�޷�ʵ��������
	//��������������Ҫ��д�����еĴ�����������ҲΪ������
};
class son:public base
{
public:
	virtual void Func()//��д
	{
		cout << "func����" << endl;
	}
};
void test01()
{
	//base b;//�޷�ʵ��������
	//new  b;
	//son s;δ��д
	son s;//���������д�������޷�ʵ����
	s.Func();
}
int main()
{
	test01();
	return 0;
}