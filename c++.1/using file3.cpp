//�������ļ�
//д�ļ�
//ios::binary  ������
#include<iostream>
#include<fstream>
using namespace std;
class person
{
public:
	int m_age;
	char m_name[64];//��C�����������c++�ַ���
	
};
void test01()
{
	ofstream ofs;
	//ofstream ofs("person.txt", ios::binary| ios::out);
	//����ֱ��д  ofs�����й��캯��
	ofs.open("person.txt", ios::out| ios::binary);
	person p = { 29,"����" };
	ofs.write((const char *)&p,sizeof(person));
	ofs.close();
}
int main()
{  
	test01();
	return 0;
}