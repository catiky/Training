//list排序案例 对于自定义数据类型作排序
#include<iostream>
#include<list>
#include<string>
using namespace std;
//按照年龄进行升序，如果年龄相同按照身高进行降序
class person
{
public:
	person(string name, int age, int height)
	{
		m_name = name;
		m_age = age;
		m_height = height;
	}
	string m_name;//姓名
	int m_age;//年龄
	int m_height;//身高
};
//排序规则
bool compare(person p1, person p2)
{
	if (p1.m_age != p2.m_age)
	{
		return p1.m_age < p2.m_age;
	}
	else
	{
		return p1.m_height > p2.m_height;
	}
}
void test01()
{
	//创建容器
	list<person> l;
	//准备数据
	person p1("刘备", 35, 175);
	person p2("曹操", 45, 180);
	person p3("孙权", 40, 170);
	person p4("赵云", 25, 190);
	person p5("张飞", 35, 160);
	person p6("关羽", 35, 200);
	//插入数据
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);
	cout << "排序前" << endl;
	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << " 姓名：" << (*it).m_name << " 年龄：" << (*it).m_age << " 身高：" << (*it).m_height<<endl;
	}
	//排序后
	cout << "----------------------------------" << endl;
	cout << "排序后" << endl;
	l.sort(compare);
	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << " 姓名：" << (*it).m_name << " 年龄：" << (*it).m_age << " 身高：" << (*it).m_height << endl;
	}
}
int main()
{
	test01();
	return 0;
}
