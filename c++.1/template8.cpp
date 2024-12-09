// 类模板与继承
#include<iostream>
using namespace std;
template<class T>
class base
{
public:
	T m;
};
class son1 :public base<int>//必须要知道父类中的T类型，才能继承
{

};
void test01()
{
	son1 s1;
}
//如果想灵活指定父类中文件的T类型，子类也需要变更模板
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
