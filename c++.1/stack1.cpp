//stack 常用接口
#include<iostream>
#include<stack>
using namespace std;
void test01()
{
	//特点：符合先进后厨的数据结构
	stack<int> s;
	//入栈
	s.push(1);
	s.push(2);
	s.push(3);
	cout << "栈的大小: " << s.size() << endl;
	//只要栈不为空，查看栈顶，并且执行出栈的操作
	while (!s.empty())
	{
		//查看栈顶的元素
		cout <<"栈顶的元素: "<< s.top() << endl;
		//出栈
		s.pop();
	}
	cout << "栈的大小: " << s.size() << endl;
}
int main()
{
	test01();
	return 0;
}