//��̬���ܣ��Լ����ʹ��
#include<iostream>
using namespace std;
class animal
{
public:
	 virtual void speak()//�麯��
	{
		cout << "������˵��" << endl;
	}
};
class cat :public animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};
// ִ��˵���ĺ���
// ��ַ��󶨣��ڱ���׶�ȷ��������ַ
//�����Ҫè˵������ô���ַҪ�����н׶ΰ󶨣���ַ���
class dog :public animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//��̬��̬��������
//1.Ҫ�м̳й�ϵ
//2. ����Ҫ��д�����麯�� ��д  ��������ֵ����  ������  �����б� 
//��ȫ��ͬ
//��̬ʹ��
//����ָ�������ָ���������
void dospeak(animal&animal)//animal &animal = cat ����ֱ��ָ������
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