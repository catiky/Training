//vector预留空间
#include<iostream>
#include <vector>
using namespace std;
void test01()
{
	vector<int> v;

	//预留空间
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {       //每次分配新的空间  他的首地址都会进行更让  用num来技术可以看到跟改了了多少次  进而查看它重新分配了多少次内存
			p = &v[0];
			num++;
		}
	}

	cout << "num:" << num << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}