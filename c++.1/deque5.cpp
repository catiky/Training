//deque ���ݴ�ȡ
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

//���ݴ�ȡ
void test01()
{

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";//ͨ������ȡ��
	}
	cout << endl;


	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";//ͨ��atȡ��
	}
	cout << endl;

	cout << "front:" << d.front() << endl;//ȡ����ͷ����

	cout << "back:" << d.back() << endl;//ȡ��������

}

int main() {

	test01();

	system("pause");

	return 0;
}