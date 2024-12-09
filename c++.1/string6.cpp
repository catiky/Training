// string字符存取
#include<iostream>
#include<string>
using namespace std;
/** `char& operator[](int n); `     //通过[]方式取字符
* `char& at(int n);   `                    //通过at方法获取字符*/
void test01()
{
	//读写
	string str1 = "hello";
	cout << str1 << endl;
	//1.通过【】来访问单个字符
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i]<<" ";
	}

	//2.通过at的方式来访问单个字符
	cout << endl;
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << " ";
	}
	cout << endl;
	//修改
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