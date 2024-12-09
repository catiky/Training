#include<iostream>
using namespace std;
//ʵ��һ�� �����ֽ�������ĺ���
//�Ӵ�С
//�����㷨

//��������ģ��
template<class T>
void myswap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}
template<class T>
void mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		//��С����
		/*int max = len-1-i;
		for (int j=len-1-i;j>=0;j--)
		{
			if (arr[max] < arr[j])
			{
				max=j;
			}
		}
		if (max != len-1-i)
		{
			myswap(arr[max], arr[len-1-i]);
		}*/
		//�Ӵ�С
		int max = i;
		for (int j = i; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			myswap(arr[max], arr[i]);
		}
	}
}
//�ṩһ����ӡ�����ģ��
template<class T>
void print(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArr[] = "badcfe";
	int len = sizeof(charArr)/sizeof(char);
	mysort(charArr, len);
	print(charArr, len);
}
void test02()
{
	int intArr[] = { 5,43,6,21,56,124 };
	int len = sizeof(intArr) / sizeof(int);
	mysort(intArr, len);
	print(intArr, len);
}
int main()
{
	//test01();
	test02();
	return 0;
}