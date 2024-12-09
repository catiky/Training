#include <iostream>
#include <iomanip> 
#include <math.h> 
#include <cmath> 
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n; 
	int a[1001][5],sum[1001];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i][1] >> a[i][2] >> a[i][3];
		sum[i] = a[i][1] + a[i][2] + a[i][3];
	}
	int cnt=0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++) 
		{
			if (abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5 && abs(a[i][3] - a[j][3]) <= 5 && abs(sum[i] - sum[j]) <= 10)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
}


