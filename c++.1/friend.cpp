//��Ԫ
//#include<iostream>
//#include<string>
//using namespace std;
//class building
//{
//	friend void bestgay(building* building);//�ؼ�   ʹ�ⲿ���Է���˽��
//public:
//	building()
//	{
//		settingroom = "����";
//		bedroom = "����";
//	}
//public:
//	string settingroom;
//private:
//	string bedroom;
//};
//void bestgay(building *building)
//{
//	cout << "�û������ڷ���: " << building->settingroom << endl;
//	cout << "�û������ڷ���: " << building->bedroom << endl;
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



//��Ԫ��
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
//	friend class goodgay;//��Ԫ��Ĺؼ�
//public:
//	Building();
//	string settingroom;
//private:
//	string bedroom;
//};
//Building::Building()
//{
//	settingroom = "����";
//	bedroom = "����";
//}
//goodgay::goodgay()
//{
//	building = new Building;
//}
//void goodgay::visit()
//{
//	
//	cout << "�û������ڷ���: " << building->settingroom << endl;
//		cout << "�û������ڷ���: " << building->bedroom << endl;
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



//��Ա��������Ԫ
#include<iostream>
#include<string>
using namespace std;
class Building;
class goodgay
{
public:
	goodgay();
	void visit();//��visit���Է���building�е�˽�г�Ա
	void visit2();//��visit2�����Է���˽�г�Ա
	Building* building;
};
class Building
{
	friend void goodgay::visit();//���߱��������visit�������Է���˽������
public:
	Building();
	string settingroom;
private:
	string bedroom;
};
Building::Building()
{
	settingroom = "����";
	bedroom = "����";
}
goodgay::goodgay()
{
	building = new Building;
}
void goodgay::visit()
{

	cout << "�û������ڷ���: " << building->settingroom << endl;
	cout << "�û������ڷ���: " << building->bedroom << endl;
}
void goodgay::visit2()
{
	cout << "�û������ڷ���: " << building->settingroom << endl;
	//cout << "�û������ڷ���: " << building->bedroom << endl;��Ϊδ˵��visit2�����Ȩ�� ���Բ��ܷ���˽������
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