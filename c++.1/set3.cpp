#include<iostream>
#include<set>
using namespace std;

//setÈİÆ÷µÄ²åÈëÓëÉ¾³ı
void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> s1;
	//²åÈë
	s1.insert(160);
	s1.insert(110);
	s1.insert(130);
	s1.insert(120);
	//±éÀú
	printset(s1);
	//É¾³ı
	s1.erase(s1.begin());
	printset(s1);
	//É¾³ıÖØÔØ°æ±¾
	s1.erase(120);
	printset(s1);
	//Çå¿Õ
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printset(s1);
}
int main()
{
	test01();
	return 0;
}