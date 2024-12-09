#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<ctime>
using namespace std;
//案例-员工分组
class worker
{
public:
	worker()
	{
		Salary=0;
	}
	worker(string name, int salary)
	{
		m_name = name;
		Salary = salary;
	}
	string m_name;
	int Salary;
};
//1.创建员工
void creatworker(vector<worker>& v)
{
		string nameseed = "ABCDEFGHIJ";
		for (int i = 0; i < 10; i++)
		{
			worker worker;
			worker.m_name = "员工 ";
			worker.m_name += nameseed[i];
			worker.Salary = rand() % 10000 + 10000;
			v.push_back(worker);
		}
}
//2.员工分组
void setGrope(vector<worker>&v, multimap<int, worker>& m)//得用引用的方式传入，地址传入
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//生成随机部门编号  //0 1 2
		int depaId = rand() % 3;
		//key代表部门编号   value代表员工·
		m.insert(make_pair(depaId, *it));
	}
}
//3.生成部门
void printworker(multimap<int, worker>& m)
{
	//策划部门
	cout << "----------策划部门----------" << endl;
	multimap<int, worker>::iterator pos = m.find(0);//将所需的人进行定位
	int num = m.count(0);//统计人数，便于只打印该部门的人数
	int index = 0;
	for (; pos != m.end()&&index != num;pos++,index++)//for中只有三个分号
	{
		cout << "姓名： " << pos->second.m_name << "  工资： " << pos->second.Salary << endl;
	}
	//美术部门
	cout << "----------美术部门----------" << endl;
	 pos = m.find(1);//不需要重复定义
	 num = m.count(1);
	 index = 0;
	for (; pos != m.end() && index != num; pos++, index++)//for中只有三个分号
	{
		cout << "姓名： " << pos->second.m_name << "  工资： " << pos->second.Salary << endl;
	}
	//研发部门
	cout << "----------研发部门----------" << endl;
	pos = m.find(2);//不需要重复定义
	num = m.count(2);
	index = 0;
	for (; pos != m.end() && index != num; pos++, index++)//for中只有三个分号
	{
		cout << "姓名： " << pos->second.m_name << "  工资： " << pos->second.Salary << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));//随机种子
	//创建容器
	vector<worker> v;
	creatworker(v);
	//员工分组
	multimap<int, worker> m;
	setGrope(v, m);
	/*for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_name << "    工资：" << it->Salary << endl;
	}*/
	//生成部门
	printworker(m);
	return 0;
}