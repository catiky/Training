//��ͨ������ģ�庯��������

#include<iostream>
using namespace std;
//1.��ͨ�������Ե��ÿ��Է�����ʽ����ת��
// 2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
// 3.����ģ�� ����ʾָ������ ���Է�����ʽ����ת�� 
template<class T>
T myadd(T a, T b)
{
	return a+b;
}

int add(int a, int b)
{
	return a + b;
}
void test01()
{
	int a = 30;
	int b = 29;
	add(a, b);
	cout << a << "+" << b <<"="<<add(a,b)<< endl;
	char c = 'c';
	//��ͨ������ʽת��  ���ַ�cת����int��
	cout << a << "+" << c << "=" << add(a, c) << endl;
}
void test02()
{
	int a = 20;
	int b = 22;
	cout << myadd(a, b) << endl;
	char c = 'c';
	//����ģ���޷�������ʽת�����޷�ʹ���ַ�
	//��ʾָ������ �ᷢ����ʽ����ת��
	cout << myadd<int>(a, c) << endl;//���Զ�����ת������ʹ��
}
int main()
{
	//test01();
	test02();
	return 0;
}