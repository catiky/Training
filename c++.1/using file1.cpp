//文本文件写文件
#include<iostream>
#include<fstream>//1.包含头文件
using namespace std;
//文本文件写文件

void test01()
{
	//2.创建流对象
	ofstream  ofs;
	//3.指定打开方式
	ofs.open("test.txt", ios::out);
	//没有指定具体路径，他会创建在当前项目的文件路径一致
	//4.写内容
	ofs << "张三  " << endl;
	ofs << "性别 男  " << endl;
	ofs << "年龄 29  " << endl;
	//5.关闭文件
	ofs.close();
}
int main()
{
	test01();
	return 0;
}