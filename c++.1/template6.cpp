//��ģ���г�Ա��������ʱ��
//��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
#include<iostream>
using namespace std;
class person1
{
public:
	void showperson1()
	{
		cout << "Person1 show" << endl;
	}
};
class person2
{
public:
	void showperson2()
	{
		cout << "Person2 show" << endl;
	}
};
template<class T>
class myclass
{
public:
	T a;
	void Func1()
	{
		a.showperson1();
	}
	void Func2()
	{
		a.showperson2();
	}
};
void test01()
{
	myclass<person1> m;
	m.Func1();//��T��������p1ʱ�����Ե���p1�ĺ���
	m.Func2();//��T��������p2ʱ�����Ե���p2�ĺ���
}
int main()
{
	test01();
	return 0;
}