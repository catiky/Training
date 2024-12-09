//deque �����ɾ��
#include<iostream>
#include <deque>
using namespace std;
/*- `push_back(elem);`          //������β�����һ������
- `push_front(elem);`        //������ͷ������һ������
- `pop_back();`                   //ɾ���������һ������
- `pop_front();`                 //ɾ��������һ������

ָ��λ�ò�����

* `insert(pos,elem);`         //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�

* `insert(pos,n,elem);`     //��posλ�ò���n��elem���ݣ��޷���ֵ��

* `insert(pos,beg,end);`    //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��

* `clear();`                           //�����������������

* `erase(beg,end);`             //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�

* `erase(pos);`                    //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�*/
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//���˲���
void test01()
{
	deque<int> d;
	//β��
	d.push_back(10);
	d.push_back(20);
	//ͷ��
	d.push_front(100);
	d.push_front(200);

	printDeque(d);

	//βɾ
	d.pop_back();
	//ͷɾ
	d.pop_front();
	printDeque(d);
}

//����
void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.insert(d.begin(), 1000);//�ڿ�ʼ��λ�ò���1000
	printDeque(d);

	d.insert(d.begin(), 2, 10000);//�ڿ�ʼ��λ�ò�������100000
	printDeque(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());//��d��ʼ��λ�ò���d2��begin��end֮�����
	printDeque(d);

}

//ɾ��
void test03()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.erase(d.begin());//ɾȥd��ͷ������
	printDeque(d);

	d.erase(d.begin(), d.end());//ɾȥd��begin��end֮�����
	d.clear();//ɾȥ������
	printDeque(d);
}

int main() {

	//test01();

	//test02();

	test03();

	system("pause");

	return 0;
}
