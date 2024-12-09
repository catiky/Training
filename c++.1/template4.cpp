//ÀàÄ£°å
#include<iostream>
using namespace std;
template<class T1, class T2>
class book
{
public:
	book(T1 name, T2 num)
	{
		this->m_name = name;
		this->m_num = num;
	}
	void show()
	{
		cout << this->m_name << " " << this->m_num << endl;;
	}
	T1 m_name;
	T2 m_num;
};
void test01()
{
	book<string,int> b("Mark", 29);
	b.show();
}
int main()
{
	test01();
	return 0;
}