#include<iostream>
using namespace std;
//实现一个 对数字进行排序的函数
//从大到小
//排序算法

//交换函数模板
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
		//从小到大
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
		//从大到小
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
//提供一个打印数组的模板
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