#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//* ����bool���͵ķº�����Ϊ**ν��**
//*���operator()����һ����������ô����һԪν��
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//���Ҵ���5����
	//GreaterFive ������������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "û�ҵ�!" << endl;
	}
	else {
		cout << "�ҵ�:" << *it << endl;
	}

}
int main()
{
	test01();
	return 0;
}