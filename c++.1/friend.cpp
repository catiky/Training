//友元
//#include<iostream>
//#include<string>
//using namespace std;
//class building
//{
//	friend void bestgay(building* building);//关键   使外部可以访问私密
//public:
//	building()
//	{
//		settingroom = "客厅";
//		bedroom = "卧室";
//	}
//public:
//	string settingroom;
//private:
//	string bedroom;
//};
//void bestgay(building *building)
//{
//	cout << "好基友正在访问: " << building->settingroom << endl;
//	cout << "好基友正在访问: " << building->bedroom << endl;
// }
//void test01()
//{
//	building building;
//	bestgay(&building);
//}
//int main()
//{
//	test01();
//	return 0;
//}



//友元类
//#include<iostream>
//#include<string>
//using namespace std;
//class Building;
//class goodgay
//{
//public:
//	goodgay();
//	void visit();
//	Building *building;
//};
//class Building
//{
//	friend class goodgay;//友元类的关键
//public:
//	Building();
//	string settingroom;
//private:
//	string bedroom;
//};
//Building::Building()
//{
//	settingroom = "客厅";
//	bedroom = "卧室";
//}
//goodgay::goodgay()
//{
//	building = new Building;
//}
//void goodgay::visit()
//{
//	
//	cout << "好基友正在访问: " << building->settingroom << endl;
//		cout << "好基友正在访问: " << building->bedroom << endl;
//}
//void test01()
//{
//	goodgay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}



//成员函数做友元
#include<iostream>
#include<string>
using namespace std;
class Building;
class goodgay
{
public:
	goodgay();
	void visit();//让visit可以访问building中的私有成员
	void visit2();//让visit2不可以访问私有成员
	Building* building;
};
class Building
{
	friend void goodgay::visit();//告诉编译器这个visit函数可以访问私有内容
public:
	Building();
	string settingroom;
private:
	string bedroom;
};
Building::Building()
{
	settingroom = "客厅";
	bedroom = "卧室";
}
goodgay::goodgay()
{
	building = new Building;
}
void goodgay::visit()
{

	cout << "好基友正在访问: " << building->settingroom << endl;
	cout << "好基友正在访问: " << building->bedroom << endl;
}
void goodgay::visit2()
{
	cout << "好基友正在访问: " << building->settingroom << endl;
	//cout << "好基友正在访问: " << building->bedroom << endl;因为未说明visit2有这个权限 所以不能访问私有内容
}
void test01()
{
	goodgay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
	return 0;
}