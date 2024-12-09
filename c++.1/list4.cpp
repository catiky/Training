//list �����ɾ��
#include<iostream>
#include<list>
using namespace std;
/** push_back(elem);//������β������һ��Ԫ��
* pop_back();//ɾ�����������һ��Ԫ��
* push_front(elem);//��������ͷ����һ��Ԫ��
* pop_front();//��������ͷ�Ƴ���һ��Ԫ��
* insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
* insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
* insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
* clear();//�Ƴ���������������
* erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
* erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
* remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�*/
void printList(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> L;
	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);
	//ͷ��
	L.push_front(1);
	L.push_front(2);
	L.push_front(3);
	L.push_front(4);

	printList(L);
	//βɾ
	L.pop_back();
	//ͷɾ
	L.pop_front();
	printList(L);
	//insert����
	//insert(L.begin(), 1000);
	printList(L);
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);//ƫ�Ƶ��ڶ�λ   �õ������ķ�ʽ������
	printList(L);
	//ɾ��
	it = L.begin();
	//3 1000 2 1 10 20 30
	L.erase(++it);//3 2 1 10 20 30    �õ������ķ�ʽ������
	printList(L);
	//�Ƴ�
	L.push_back(10000);
	printList(L);
	L.remove(10000);//ɾ������10000
	printList(L);
	//���
	L.clear();
	printList(L);
}
int main()
{
	test01();
	return 0;
}
