#include<iostream>

using namespace std;

const int N = 100010;

int a[N];

int lowbit(int x)
{
	return x & -x;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);

		int res = 0;
		while (a[i])
		{
			a[i] -= lowbit(a[i]), res++;
		}
		cout << res << ' ';
	}

	return 0;
}