//�ı��ļ�д�ļ�
#include<iostream>
#include<fstream>//1.����ͷ�ļ�
using namespace std;
//�ı��ļ�д�ļ�

void test01()
{
	//2.����������
	ofstream  ofs;
	//3.ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);
	//û��ָ������·�������ᴴ���ڵ�ǰ��Ŀ���ļ�·��һ��
	//4.д����
	ofs << "����  " << endl;
	ofs << "�Ա� ��  " << endl;
	ofs << "���� 29  " << endl;
	//5.�ر��ļ�
	ofs.close();
}
int main()
{
	test01();
	return 0;
}