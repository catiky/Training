#include<iostream>
#include<map>
using namespace std;
//  map����͸�ֵ
void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " ";
		cout << "value: " << it->second << endl;
	}
	cout << endl;
}
void test01()
{
	//Ĭ�Ϲ���
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));//ǰ����Ϊkey������Ϊvalueʵֵ
	m.insert(pair<int, int>(2, 20));//����ʱҪ�ö���
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 50));//keyֵ�������ظ� ����ظ����Զ�ɾȥ
	printmap(m);//����ǰ���key������
	//��������
	map<int, int> m2(m);
	printmap(m2);
	//��ֵ
	map<int, int> m3;
	m3 = m2;
	printmap(m3);
}
int main()
{
	test01();
	return 0;
}