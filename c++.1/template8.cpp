// ��ģ����̳�
#include<iostream>
using namespace std;
template<class T>
class base
{
public:
	T m;
};
class son1 :public base<int>//����Ҫ֪�������е�T���ͣ����ܼ̳�
{

};
void test01()
{
	son1 s1;
}
//��������ָ���������ļ���T���ͣ�����Ҳ��Ҫ���ģ��
template<class T1,class T2>
class son2 :public base<T1>
{
public:
	son2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
	T2 name;
};
void test02()
{
	son2<int,char> s2;
}
int main()
{  
	test01();
	test02();
	return 0;
}
