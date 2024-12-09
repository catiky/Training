//queue 常用接口
#include<iostream>
#include<queue>
#include<string>
using namespace std;
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
void test01()
{
	//创建队列
	queue<person> q;
	//准备数据
	person p1("唐僧",30);
	person p2("孙悟空",1000);
	person p3("猪八戒",900);
	person p4("沙僧",800);
	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列大小: " << q.size() << endl;
	//判断只要队列不为空，查看队头，查看队尾，出队
	while (!q.empty())
	{
		//查看队头
		cout << "队头-----" << "姓名 " << q.front().m_name << "年龄 " << q.front().m_age << endl;
        //查看队尾
		cout << "队尾-----" << "姓名 " << q.back().m_name << "年龄 " << q.back().m_age << endl;
		//出队
		q.pop();
	}
	cout << "队列大小: " << q.size() << endl;
}
int main()
{
	test01();
	return 0;
}