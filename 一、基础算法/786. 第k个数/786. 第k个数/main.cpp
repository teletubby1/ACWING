#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 100010;

int q[N];
int n,k;

void quick_sort(int q[], int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int x = q[l + r >> 1]; //，理论上可以取任意值，取x=q[l]时会超时，原因未知
	int i = l - 1;
	int j = r + 1;
	while (i < j)
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}
	quick_sort(q, l, j); //此时x不能取q[r]，若使用 quick_sort(q,l,i-1) quick_sort(q,i,r) 则不能取q[l]
	quick_sort(q, j + 1, r);
}

int main()
{
	scanf("%d%d", &n,&k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &q[i]);
	}
	quick_sort(q, 0, n - 1);
	cout << q[k - 1];
	return 0;
}