//���μ̳�
#include<iostream>
using namespace std;
class bb
{
public:
	/*bb()
	{
		m_g = 0;
	}*/
	
	int m_g;
};
//������̳� ������μ̳е�����
//�̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
//bb��Ϊ�����
class base1:virtual public bb
{
public:
	/*base1()
	{
		m_a = 100;
	}*/
	int m_a;
};
class base2:virtual public bb
{
public:
	/*base2()
	{
		m_b = 200;
	}*/
	int m_b;
};

class son : public base1, public base2
{
public:
	/*son()
	{
		m_c = 20;
	}*/
	int m_c;
};
void test01()
{
	son s;
	base1 b;
	base2 a;
	bb c;
	//�����μ̳�ʱ��������������ͬ�����ݣ���Ҫ������������
	///s.base1::m_g = 199;
	//s.base2::m_g = 1998;//��̳к�ǰ�����ݸ���
	/*base1 b;
	b.bb::bb(199);
	base2 p;
	p.bb::bb(123);*/
	/*cout << s.m_a << endl;
	cout << s.m_b << endl;
	cout << s.m_c<< endl;
	cout << s.m_g<< endl;*/

	cout << sizeof(a)<< endl;
	cout << sizeof(c)<< endl;
	cout << sizeof(b)<< endl;
	cout << sizeof(s)<< endl;
	//δ��֮ǰ
	//cout << s.base1::m_g << endl;
	//cout << s.base2::m_g << endl;
	//�����������ֻҪһ�ݾͿ��ԣ����ݾ�����˷�

}
int main()
{
	test01();
	return 0;
}