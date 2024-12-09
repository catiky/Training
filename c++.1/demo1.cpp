#include <iostream>
using namespace std;
void  Func( int &a)
{
	cout << "Func(int &a)";
}
//int Func(int a, int b)
//{	return a + b;
//}
void  Func(const int& a)
{
	cout << "Func(const int &a)";
}
void Func2(int a)
{
	cout << "Func(int a)";
}
void  Func2(int a,int b=100)
{
	cout << "Func(int a,int b)";
}
int main()
{
	
	Func2(10,20);
	
	
}           