//二进制文件
//写文件
//ios::binary  二进制
#include<iostream>
#include<fstream>
using namespace std;
class person
{
public:
	int m_age;
	char m_name[64];//用C语言数组代替c++字符串
	
};
void test01()
{
	ofstream ofs;
	//ofstream ofs("person.txt", ios::binary| ios::out);
	//可以直接写  ofs里面有构造函数
	ofs.open("person.txt", ios::out| ios::binary);
	person p = { 29,"张三" };
	ofs.write((const char *)&p,sizeof(person));
	ofs.close();
}
int main()
{  
	test01();
	return 0;
}