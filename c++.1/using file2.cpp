//�ı��ļ��Ķ��ļ�
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4.������
	//��һ��
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf<<endl;
	}*/
	//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}*/
	//������
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/
	//������
	char c;
	//һ��һ���ַ����
	while ((c = ifs.get()) != EOF)//end of file
	{
		cout << c << endl;
		
	}
	//5.�ر��ļ�
	ifs.close();

} 
int main()
{
	test01();
	
	return 0;
}