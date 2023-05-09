#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 100010;

int a[N];
int h[N];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int res = 0;
	for (int i = 0, j = 0; i < n; i++)
	{
		h[a[i]]++;
		while (h[a[i]] > 1)
		{
			h[a[j]]--;
			j++;
		}
		res = max(res, i - j + 1);
	}

	cout << res << endl;

	return 0;
}