//�Ӻ����������

/*#include<iostream>
using namespace std;
class person
{
public:
	//���ó�Ա�����Ӻ������ 
	/*person operator+(person& p)
	{
		person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
	int m_a;
	int m_b;
};
//����ȫ�ֺ����Ӻ������
person operator+(person& p1, person& p2)
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
person operator+(person& p1, int num)
{
	person temp;
	temp.m_a = p1.m_a + num;
	temp.m_b = p1.m_b + num;
	return temp;
}
void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	person p2;
	p2.m_a = 100;
	p2.m_b = 20;
	person p3;
	//��Ա�������ر��ʵ���
	//p3 = p1.operator+(p2);
	//ȫ�ֺ������ر��ʵ���
	//p3 = operator+(p1, p2);
	p3 = p1 + p2;
	//��������Է�������
	//p3 = p1 + 10;//person + int
	cout << p3.m_a << endl;
	cout << p3.m_b << endl;
}
int main()
{
	test01();
	return 0;
}*/


//�������������
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	//���ó�Ա����     p.operator<<(cout)
//	//ͨ���������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
//	/*void operator<<( cout )
//	{
//
//	}*/
//	int m_a;
//	int m_b;
//};
////ֻ������ȫ�ֺ���
//ostream& operator<<(ostream &cout,person &p)//ostream �����
//{
//	cout << p.m_a << endl << p.m_b;
//	return cout;
//}
//void test01()
//{
//	person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	
//	cout << p1<<endl ;
//}
//int main()
//{
//	test01();
//	return 0;
//}
// 
// 
// 
// 
//���������
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	friend ostream& operator<<(ostream& cout, person& p);
//	person()
//	{
//		a = 0;
//	}
//	//ǰ��++
//	person& operator++()//�Ż�������Ϊ��һֱ��һ�����ݵ���
//	{
//		a++;//��jia
//		return *this;//�ڷ���ֵ
//	}
//	//����++
//	person operator++(int)//int �Ǵ���ռλ��������������ǰ�������
//	{
//		person temp = *this;//��¼���ڵ�ֵ���ú󷵻����ֵ���Լ�
//		a++;
//		return temp;//�ȷ���ԭ��ֵ    temp��Ϊ��ֵ
//	}
//	
//private:
//	int a;
//};
//ostream& operator<<(ostream &out, person &p)//����ǿ��Ҫ��������ֵ
//{
//	out << p.a;
//	return out;
//}
//void test01()
//{
//	person p;
//	cout << ++++p<<endl;
//	//cout << p++<<endl;
//	//cout << p++<<endl;
//
//}
//void test02()
//{
//	person p;
//	person p2 = p++;
//	cout << p << endl;
//	//cout << p++;����temp��Ϊ��ֵ������Ҫ����ֵ�����Դ���
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}



//��ֵ�����
#include<iostream>
using namespace std;
class person
{
public:
	person()
	{
		;
	}
	person(int age)
	{
		m_age = new int(age);
	}
	~person()
	{
		if (m_age != NULL)
		{
			delete  m_age;
			m_age = NULL;
		}
		cout << "����"<<endl;
	}
	int get()
	{
		return *m_age;
	}
	//���ظ�ֵ�����
	person& operator=(person& p)
	{
		//m_age=p.m_age;  �������ṩǳ����

		//this->m_age = new int(*p.m_age);//�����������
		//���ж��Ƿ�������  ��������ͷŸɾ�
		if (m_age != NULL)
		{
			delete  m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);
          return *this;
	}

	int* m_age;
	//Ҫ���ض�����
	
};
void test01()
{
	person p1(18);
	person p2;
	person p3(30);
	p3 = p2 = p1;

	/*cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;
	cout << *p3.m_age << endl;*/
	cout << p2.get() << endl;
}
int main()
{
	test01();
	return 0;
}



//��ϵ�����
//#include<iostream>
//#include<string>
//using namespace std;
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//
//	bool operator==(person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(person& p)
//	{
//		if (this->m_name != p.m_name && this->m_age != p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//void test01()
//{
//	person p1("Tom", 18);
//	person p2("jack", 18);
//	if (p1 == p2)
//	{
//		cout << "same"<<endl;
//	}
//	else
//	{
//		cout << "different"<<endl;
//	}
//	person p3("mack", 28);
//	if (p1 != p3)
//	{
//		cout << "is different"<<endl;
//	}
//	else
//	{
//		cout << "is same"<<endl;
//	}
//	
//}
//int main()
//{
//	test01();
//	return 0;
//}



//�����������������
//#include<iostream>
//#include<string>
//using namespace std;
//class person {
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//void person02(string test)
//{
//	cout << test << endl;
//}
//void test01()
//{
//	person p1;
//	p1("hello world");//��Ϊʹ�������ǳ��������ã���˳�Ϊ�º���
//	person02("helloworld");
//}

//�º����ǳ���û�й̶���д��
//�ӷ���
//class add
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//void test02()
//{
//	add add;
//	int ret=add(100, 200);
//	cout << ret << endl;
//	//��������
//	cout << ad()(200, 100) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}