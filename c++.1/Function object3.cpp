#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//��Ԫν��
class compare
{
public:
	bool operator()(int c,int d)
	{
		return c > d;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	cout << "----------��С����----------" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//ʹ�ú������󣬸ı��㷨���ԣ���˳��Ϊ�Ӵ�С
	cout << "-----------�Ӵ�С----------" << endl;
	sort(v.begin(), v.end(), compare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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