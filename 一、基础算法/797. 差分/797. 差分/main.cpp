#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int n, m;
const int N = 100010;

int a[N], b[N];

//差分插入操作
void insert(int l, int r, int c)
{
	b[l] += c;
	b[r + 1] -= c;
}

int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]); //输入数组
	}
	for (int i = 1; i <= n; i++)
	{
		insert(i, i, a[i]);//初始化b[]数组
	}

	//进行插入操作
	while (m--)
	{
		int l, r, c;
		scanf("%d%d%d", &l, &r, &c);
		insert(l, r, c);
	}

	for (int i = 1; i <= n; i++)
	{
		b[i] += b[i - 1]; //求前缀和，获取当前更新后的a[]
	}
	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";//输出
	}

	return 0;

}