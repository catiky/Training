#include<iostream>
#include<set>
using namespace std;
//pair���鴴��
void test01()
{
	//��һ�ַ�ʽ
	pair<string, int> p("Tom", 29);
	cout << "������" << p.first << " ���䣺" << p.second << endl;
	//�ڶ��ַ�ʽ
	pair<string, int> p2 = make_pair("Mark", 20);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}
int main()
{
	test01();
	return 0;
}