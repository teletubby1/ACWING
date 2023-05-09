#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	double n,mid;
	double l = -10000, r = 10000;
	cin >> n;
	while (r-l > 1e-8)
	{
		mid = (l + r)/2;
		if (mid * mid * mid >= n)
		{
			r = mid;
		}
		else
		{
			l = mid;
		}
	}
	printf("%.6lf\n", l);
	//cout << l << endl;

	return 0;
}