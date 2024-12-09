//案例-评委打分
#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;
class person
{
public:
	person(string name, int score)
	{
		m_name = name;
		m_score = score;
	}
	string m_name;
	int m_score;
};
void creatperson(vector<person>&v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name +=nameseed[i];
		int score = 0;
		person p(name, score);
		//这样就将创建的person对象加到容器中
		v.push_back(p);
	}
}
//打分
void setscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放入到deque中
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score;
			//cin >> score;//可以输入分数
			score = rand() % 41 + 60;//60~100  rand随机分
			d.push_back(score);
		}
		//测试
		/*cout << "选手" << " " << "分数 : " << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit<<" ";
		}
		cout << endl;*/


		//排序
		sort ( d.begin(), d.end());
		//去除最高和最低分
		d.pop_back();
		d.pop_front();
		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//累加每位评委的分数

		}
		int ave = sum / d.size();
		//将平均分赋值到人身上
		it->m_score = ave;
	}
}
void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手"<<it->m_name << " " << "分数 : "<<it->m_score << endl;
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建五名选手
	vector<person> v;
	creatperson(v);
	//测试
	/*for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_score<<endl;
	}*/
	//2，给五名选手打分
	setscore(v);

	//3.显示最后的得分
	showscore(v);
	return 0;
}