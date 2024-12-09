//二进制读文件
#include<iostream>
#include<fstream>
using namespace std;
class person
{
public:
	int m_age;
	char m_name[64];
	
};
void test01()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
		if (!ifs.is_open())
		{
			cout << "文件打开失败" << endl;
			return;
		}
		person p;
	ifs.read((char*)&p,sizeof(person));
	cout << p.m_name << endl << p.m_age<<endl;
	ifs.close();
}
int main()
{
	test01();
	return 0;
}
