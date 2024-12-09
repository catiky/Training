//list容器大小操作
#include<iostream>
#include<list>
using namespace std;
void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);
	printList(L);
	//判断容器是否为空
	if (L.empty())
	{
		cout << "L为空" << endl;
	}
	else
	{
		cout << "L不为空，大小为： " << L.size() << endl;
	}
	L.resize(10,6);
	printList(L);
	L.resize(2);
	printList(L);

}
int main()
{
	test01();
	return 0;
}
