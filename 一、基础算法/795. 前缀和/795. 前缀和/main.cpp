#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int n, m;
const int N = 100010;
int a[N],b[N];

int main()
{
	scanf("%d%d", &n, &m);
	for (int i=1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	b[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		b[i] = b[i - 1]+a[i];
	}
	while (m--)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		cout << b[r] - b[l-1] << endl;
	}

	return 0;
}