//����  дһ��ͨ�õ�����
#include<iostream>
#include<string>
#include"MyArray.hpp"
using namespace std;
void print(MyArray<int> arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}
void test01()
{
	/*MyArray<int> arr1(5);
	MyArray<int> arr2(arr1);
	MyArray<int>arr3(100);
	arr3 = arr1;*/
	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.push_back(i);
	}
	//print(arr1);
	cout << "array1�Ĵ�С��" << arr1.getSize() << endl;
	cout << "array1��������" << arr1.getCapa() << endl;
	MyArray<int>arr2(arr1);
	arr2.pop_back();
	print(arr2);
     
	cout << "array2�Ĵ�С��" << arr2.getSize() << endl;
	cout << "array2��������" << arr2.getCapa() << endl;
}
class person
{
public:
	person()
	{
		;
	}
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void personprint(MyArray<person> ar)
{
	for (int i = 0; i < ar.getSize(); i++)
	{
		cout << ar[i].m_name<<" "<<ar[i].m_age << endl;
	}
}
void test02()
{
	MyArray<person> arr(10);
	person p1("�����", 30);
	person p2("����", 20);
	person p3("槼�", 18);
	person p4("���Ѿ�", 15);
	person p5("����", 24);
	//�����ݲ��뵽������
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);
	personprint(arr);
	cout << "arr�Ĵ�С��" << arr.getSize() << endl;
	cout << "arr��������" << arr.getCapa() << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}
