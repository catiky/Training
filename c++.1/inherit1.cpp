#include<iostream>
using namespace std;
class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son:public base
{
public:
	int m_d;
};
void test01()
{
	cout << sizeof(son) << endl;//16���ֽڣ�����m_c���ɷ��ʱ����أ���Ҳ���̳�
}
int main()
{
	test01();
	return 0;
}