//deque 数据存取
#include<iostream>
#include <deque>
using namespace std;
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

//数据存取
void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";//通过【】取数
	}
	cout << endl;


	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";//通过at取数
	}
	cout << endl;

	cout << "front:" << d.front() << endl;//取数开头的数

	cout << "back:" << d.back() << endl;//取出最后的数

}

int main() {

	test01();

	system("pause");

	return 0;
}