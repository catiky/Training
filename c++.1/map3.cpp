#include<iostream>
#include<map>
using namespace std;
//map�����ɾ��
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
	map<int, int> m;
	//����
	//��һ��
	m.insert(pair<int, int>(1, 10));
	//�ڶ���
	m.insert(make_pair(2, 20));
	//������
	m.insert(map<int, int>::value_type(3, 30));
	//������
	m[4] = 40;
	//��������룬��������ket������value
	 cout<<m[2]<<endl;
	//cout << m[5] << endl;//�������û�д�������������Զ�����һ��ֵΪ0��pair
	printmap(m);
	//ɾ��
	m.erase(m.begin());
	printmap(m);
	m.erase(3);//����keyΪ3    ɾ��keyΪ3
	printmap(m);

	//���
	//m.erase(m.begin(), m.end());
	m.clear();
	printmap(m);
}
int main()
{
	test01();
	return 0;
}