#include<iostream>
#include<functional>
using namespace std;
//�ڽ��º���    �����º���

//negate   ��һ��һԪ�º���  ȡ���º���
void test01()
{
	negate<int> n;
	cout << n(10) << endl;
}
//plus   ��Ԫ�º���
void test02()
{
	plus<int> p;//Ĭ�ϴ�������ͬ������
	cout << p(10, 20) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}