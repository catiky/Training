//����-��ί���
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
		string name = "ѡ��";
		name +=nameseed[i];
		int score = 0;
		person p(name, score);
		//�����ͽ�������person����ӵ�������
		v.push_back(p);
	}
}
//���
void setscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ������뵽deque��
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score;
			//cin >> score;//�����������
			score = rand() % 41 + 60;//60~100  rand�����
			d.push_back(score);
		}
		//����
		/*cout << "ѡ��" << " " << "���� : " << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit<<" ";
		}
		cout << endl;*/


		//����
		sort ( d.begin(), d.end());
		//ȥ����ߺ���ͷ�
		d.pop_back();
		d.pop_front();
		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//�ۼ�ÿλ��ί�ķ���

		}
		int ave = sum / d.size();
		//��ƽ���ָ�ֵ��������
		it->m_score = ave;
	}
}
void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ��"<<it->m_name << " " << "���� : "<<it->m_score << endl;
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//1.��������ѡ��
	vector<person> v;
	creatperson(v);
	//����
	/*for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_score<<endl;
	}*/
	//2��������ѡ�ִ��
	setscore(v);

	//3.��ʾ���ĵ÷�
	showscore(v);
	return 0;
}