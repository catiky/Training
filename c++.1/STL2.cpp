//Vector存放自定义数据类型
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test01()
{
	vector<person> v;
	person p1("Mark",159);
	person p2("Mrk",139);
	person p3("Mak",192);
	person p4("Mar",119);
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
    //遍历容器中的数据
	for (vector<person>::iterator it = v.begin(); it != v.end();it++) 
	{
		//cout << "Name:" << (*it).m_name << " Age:" << (*it).m_age << endl;
		cout << "Name:" << it->m_name << " Age:" << it->m_age << endl;

	}
}
//存放自定义类型的指针
void test02()
{
	vector<person*> v;
	person p1("Mark", 159);
	person p2("Mrk", 139);
	person p3("Mak", 192);
	person p4("Mar", 119);
	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	//遍历容器中的数据
	for (vector<person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "Name:" <<(*it)->m_name << " Age:" << (*it)->m_age << endl;
	}
}
int main()
{
	//test01();
	test02();
	return 0;
}

