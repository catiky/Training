//string���Һ��滻
#include<iostream>
#include<string>
using namespace std;
/** `int find(const string& str, int pos = 0) const;`              //����str��һ�γ���λ��,��pos��ʼ����
* `int find(const char* s, int pos = 0) const; `                     //����s��һ�γ���λ��,��pos��ʼ����
* `int find(const char* s, int pos, int n) const; `               //��posλ�ò���s��ǰn���ַ���һ��λ��
* `int find(const char c, int pos = 0) const; `                       //�����ַ�c��һ�γ���λ��
* `int rfind(const string& str, int pos = npos) const;`      //����str���һ��λ��,��pos��ʼ����
* `int rfind(const char* s, int pos = npos) const;`              //����s���һ�γ���λ��,��pos��ʼ����
* `int rfind(const char* s, int pos, int n) const;`              //��pos����s��ǰn���ַ����һ��λ��
* `int rfind(const char c, int pos = 0) const;  `                      //�����ַ�c���һ�γ���λ��
* `string& replace(int pos, int n, const string& str); `       //�滻��pos��ʼn���ַ�Ϊ�ַ���str
* `string& replace(int pos, int n,const char* s); `                 //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s*/


//1.����
void test01()
{
	//find
	string str1 = "deabcdefgde";
	int pos=str1.find("de");//���㿪ʼ��
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ��� "<<endl;
	}
	else
	{
        cout <<"�ҵ��ַ���:pos="<< pos << endl;
	}
	//rfind
	//����find�����Ǵ�������rfind��������

	pos=str1.rfind("de");//rfind���������ֵ�λ��
	cout << pos << endl;
}



//2.�滻
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//����1��λ�ĺ��3���ַ����滻Ϊ1111
	cout << str1 << endl;

}
int main()
{
	//test01();
	test02();
	return 0;
}