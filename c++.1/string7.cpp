//  string�����ɾ��
#include<iostream>
#include<string>
using namespace std;
/** `string& insert(int pos, const char* s);  `                //�����ַ���
* `string& insert(int pos, const string& str); `        //�����ַ���
* `string& insert(int pos, int n, char c);`                //��ָ��λ�ò���n���ַ�c
* `string& erase(int pos, int n = npos);`                    //ɾ����Pos��ʼ��n���ַ� */
void test01()
{
	string str1 = "hello";
	//����
	str1.insert(1, "111");
	cout << str1 << endl;
	//ɾ��
	str1.erase(1,3);
	cout << str1 << endl;
}
int main()
{
	test01();
	return 0;
}