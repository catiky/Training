//  string插入和删除
#include<iostream>
#include<string>
using namespace std;
/** `string& insert(int pos, const char* s);  `                //插入字符串
* `string& insert(int pos, const string& str); `        //插入字符串
* `string& insert(int pos, int n, char c);`                //在指定位置插入n个字符c
* `string& erase(int pos, int n = npos);`                    //删除从Pos开始的n个字符 */
void test01()
{
	string str1 = "hello";
	//插入
	str1.insert(1, "111");
	cout << str1 << endl;
	//删除
	str1.erase(1,3);
	cout << str1 << endl;
}
int main()
{
	test01();
	return 0;
}