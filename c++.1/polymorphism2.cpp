//ԭ��
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
	virtual void speak()//��д֮�� ��ָ��ָ��ĵ�ַ��Ϊ���ڵ�è�ĵ�ַ
	{
		cout << "Сè��˵��" << endl;
	}
};

class dog :public animal
{
public:
	virtual void speak()
	{
		cout << "С����˵��" << endl;
	}
};

void dospeak(animal& animal)
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
void test02()
{
	cout << sizeof(animal) << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}