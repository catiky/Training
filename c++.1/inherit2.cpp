//�ڼ̳��й���������
#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout<<" base���캯��"<<endl;
	}
	~base()
	{
		cout << "base��������" << endl;
	}
};
class son :public base
{
public:
	son()
	{
		cout << " son���캯��" << endl;
	}
	~son()
	{
		cout << "son��������" << endl;
	}
};
void test01()
{
	//base b;
	son s;
}
int main()
{
	test01();
	return 0;
}