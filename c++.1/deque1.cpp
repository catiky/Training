//deque构造函数
#include<iostream>
#include<deque>
using namespace std;
//如果想限制为只读状态，那么他的迭代器也要发生变化
void print( const deque<int>& q)
{
	for (deque<int>::const_iterator it = q.begin(); it != q.end(); it++)
	{
		//*it = 100;//只读 不能修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> q; 
	for (int i = 0; i < 10; i++)
	{
		q.push_back(i);
	}
	print(q);
	deque<int> q2(q.begin(), q.end());
	print(q2);
	deque<int>q3(10, 100);
	print(q3);
	deque<int>q4(q3);
	print(q4);
}
int main()
{
	test01();
	return 0;
}