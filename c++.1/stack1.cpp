//stack ���ýӿ�
#include<iostream>
#include<stack>
using namespace std;
void test01()
{
	//�ص㣺�����Ƚ���������ݽṹ
	stack<int> s;
	//��ջ
	s.push(1);
	s.push(2);
	s.push(3);
	cout << "ջ�Ĵ�С: " << s.size() << endl;
	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ�Ĳ���
	while (!s.empty())
	{
		//�鿴ջ����Ԫ��
		cout <<"ջ����Ԫ��: "<< s.top() << endl;
		//��ջ
		s.pop();
	}
	cout << "ջ�Ĵ�С: " << s.size() << endl;
}
int main()
{
	test01();
	return 0;
}