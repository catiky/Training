//��̬ʵ�� ��Ʒ����
#include<iostream>
using namespace std;
class drinking
{
public:
	//��ˮ
	virtual void boil() = 0;
	//����
	virtual void brew() = 0;
	//���뱭��
	virtual void  pour() = 0;
	//��������
	virtual void  putsth() = 0;
	//������Ʒ
	void drink()
	{
		boil();
		brew();
		pour();
		putsth();
	}
};
//��������
class  coffee :public drinking
{
public://��ˮ
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}
	//����
	virtual void brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void  pour()
	{
		cout << "���뱭��" << endl;
	}
	//��������
	virtual void  putsth()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
	

};
//������
class  tea :public drinking
{
public://��ˮ
	virtual void boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	//����
	virtual void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void  pour()
	{
		cout << "���뱭��" << endl;
	}
	//��������
	virtual void  putsth()
	{
		cout << "�������" << endl;
	}
};
void dowork(drinking * d)
{
	d->drink();
	delete d;
}
void test01()
{
	//��������
	coffee c;
	//c.drink();//1,
	dowork(new coffee);//2.
	cout << "---------------------" << endl;
	//������
	tea t;
	//  t.drink();//1.
	dowork(new tea);//2.
}
int main()
{
	test01();
	return 0;
}