// string�ַ���ȡ
#include<iostream>
#include<string>
using namespace std;
/** `char& operator[](int n); `     //ͨ��[]��ʽȡ�ַ�
* `char& at(int n);   `                    //ͨ��at������ȡ�ַ�*/
void test01()
{
	//��д
	string str1 = "hello";
	cout << str1 << endl;
	//1.ͨ�����������ʵ����ַ�
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i]<<" ";
	}

	//2.ͨ��at�ķ�ʽ�����ʵ����ַ�
	cout << endl;
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << " ";
	}
	cout << endl;
	//�޸�
	str1[0] = 's';
	cout << str1 << endl;
	str1.at(1) = 'b';
	cout << str1 << endl;

}
int main()
{
	test01();
	return 0;
}