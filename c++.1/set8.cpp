#include<iostream>
#include<set>
#include<string>
using namespace std;
// set容器排序   2 set存放自定义数据类型
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};
class compare
{
public:
	//要用从const修饰 防止修改值
	bool operator()(person p1,person p2) const
	{
		return p1.m_age < p2.m_age;//如果用年龄，如果年龄一样 会让年龄相同的消失一个
	}
		
};
void test01()
{
	set<person,compare> s;
	//创建person对象
	person p1("刘备", 23);
	person p2("关羽", 27);
	person p3("张飞", 25);
	person p4("赵云", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<person,compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}

}
int main()
{
	test01();
	return 0;
}