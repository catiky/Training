#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;
/*`random_shuffle(iterator beg, iterator end);  `

// 指定范围内的元素随机调整次序

// beg 开始迭代器

// end 结束迭代器

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
	random_shuffle(v.begin(), v.end());//打乱顺序
	for_each(v.begin(), v.end(), print);
}
int main()
{
	srand((unsigned int)time(NULL));
	test01();
}