#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<ctime>
using namespace std;
//����-Ա������
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
//1.����Ա��
void creatworker(vector<worker>& v)
{
		string nameseed = "ABCDEFGHIJ";
		for (int i = 0; i < 10; i++)
		{
			worker worker;
			worker.m_name = "Ա�� ";
			worker.m_name += nameseed[i];
			worker.Salary = rand() % 10000 + 10000;
			v.push_back(worker);
		}
}
//2.Ա������
void setGrope(vector<worker>&v, multimap<int, worker>& m)//�������õķ�ʽ���룬��ַ����
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��  //0 1 2
		int depaId = rand() % 3;
		//key�����ű��   value����Ա����
		m.insert(make_pair(depaId, *it));
	}
}
//3.���ɲ���
void printworker(multimap<int, worker>& m)
{
	//�߻�����
	cout << "----------�߻�����----------" << endl;
	multimap<int, worker>::iterator pos = m.find(0);//��������˽��ж�λ
	int num = m.count(0);//ͳ������������ֻ��ӡ�ò��ŵ�����
	int index = 0;
	for (; pos != m.end()&&index != num;pos++,index++)//for��ֻ�������ֺ�
	{
		cout << "������ " << pos->second.m_name << "  ���ʣ� " << pos->second.Salary << endl;
	}
	//��������
	cout << "----------��������----------" << endl;
	 pos = m.find(1);//����Ҫ�ظ�����
	 num = m.count(1);
	 index = 0;
	for (; pos != m.end() && index != num; pos++, index++)//for��ֻ�������ֺ�
	{
		cout << "������ " << pos->second.m_name << "  ���ʣ� " << pos->second.Salary << endl;
	}
	//�з�����
	cout << "----------�з�����----------" << endl;
	pos = m.find(2);//����Ҫ�ظ�����
	num = m.count(2);
	index = 0;
	for (; pos != m.end() && index != num; pos++, index++)//for��ֻ�������ֺ�
	{
		cout << "������ " << pos->second.m_name << "  ���ʣ� " << pos->second.Salary << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));//�������
	//��������
	vector<worker> v;
	creatworker(v);
	//Ա������
	multimap<int, worker> m;
	setGrope(v, m);
	/*for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_name << "    ���ʣ�" << it->Salary << endl;
	}*/
	//���ɲ���
	printworker(m);
	return 0;
}