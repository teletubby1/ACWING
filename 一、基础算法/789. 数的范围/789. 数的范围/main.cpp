#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

const int N = 100010;
int n, q, k;
int a[N];

bool binary_search(int l, int r,int val)
{
	 
	while (l < r)
	{
		int mid = l + r >> 1;
		if (a[mid] >= val) r = mid;
		else l = mid + 1;
	}
	if (a[l] != val)
	{
		cout << "-1 -1" << endl;
		return false;
	}
	else cout << l << " ";
	return true;
}

bool binary_search2(int l, int r, int val)
{
	 
	while (l < r)
	{
		int mid = l + r + 1 >> 1;
		if (a[mid] > val) r = mid-1;
		else l = mid;
	}
	cout << l <<endl;
	return true;
}


int main()
{
	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &k);
		int l = 0, r = n - 1;
		if(binary_search(l, r,k)) binary_search2(l, r, k);
	}

	return 0;
}