#include<iostream>
#include<map>
using namespace std;
//map��������
//map����Ĭ���������Ϊ ����keyֵ���� ��С��������������θı��������
class compare
{
public:
	bool operator()(int c,int d)const//��Ϊmap�Ƕ�key�������У�����ֻ��key����������������
	{
		return c > d;
	}
};
void test01()
{
	map<int, int,compare> m;//���Ϸº��������Խ�������
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	for (map<int, int,compare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " ";
		cout << "value: " << it->second << endl;
	}

}
int main()
{
	test01();
	return 0;
}