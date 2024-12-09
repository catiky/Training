//deque 排序
#include<iostream>
#include <deque>
using namespace std;
#include <algorithm>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque(d);
	sort(d.begin(), d.end());//默认从大到小
	printDeque(d);

}

int main() {

	test01();

	system("pause");

	return 0;
}