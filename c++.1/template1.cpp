//����ģ������﷨
#include<iostream>
using namespace std;
void swapInt(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void swapdouble(double& a, double& b)
{
	double t = a;
	a = b;
	b = t;
}
//����ģ��
//����һ��ģ�壬���߱���������Ĵ��벻Ҫ����
//T��һ��ͨ�õ���������
template<typename T>//typename������class�滻
void myswap(T&a,T&b)
{
	T t = a;
	a = b;
	b = t;
}
void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//���ַ���ʹ�ú���ģ��
	//1.�Զ������Ƶ�,�����Ƶ���һ�µ���������T�ſ���ʹ�á�
	// ����Ҫȷ��T�����ͣ��ſ���ʹ��
	//myswap(a, b);
	//2.��ʾָ������
	myswap<int>(a, b);
	double g = 2.33;
	myswap(a.g);//�������Ͳ�һ��������ʹ��
	cout << a << endl << b << endl;
	double c = 2.12;
	double d = 3.21;
	swapdouble(c, d);
	cout << c << endl << d << endl;
}
//ģ�����Ҫ��ȷ�����������ͣ�����ʹ��
template<class T>
void Func()
{
	cout << "Func����" << endl;
}
void test02()
{
	Func<int>();//��һ���������;Ϳ���ʹ��
}
int main()
{
	//test01();
	test02();
	return 0;
}