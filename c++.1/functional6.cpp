#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
//                     �߼��º���
//logical_mot   �߼���
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//�����߼��ǽ��������˵�����v2��,��ִ��ȡ������
	vector<bool> v2;
	v2.resize(4);
	//���ǰ����㷨 ������֮ǰ����Ҫ��ǰȥ���ٿռ䣬�����޷�����
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	//ԭ��������ʼ�������ͽ�������������Ҫ���˵ĵ���������ɼ�һ������
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	return 0;
}