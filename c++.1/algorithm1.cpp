#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;
/*`random_shuffle(iterator beg, iterator end);  `

// ָ����Χ�ڵ�Ԫ�������������

// beg ��ʼ������

// end ����������

*/
void print(int i)
{
	cout << i << " ";
}
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());//����˳��
	for_each(v.begin(), v.end(), print);
}
int main()
{
	srand((unsigned int)time(NULL));
	test01();
}