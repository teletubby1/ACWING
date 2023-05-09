#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int n,m,q;
const int N = 1010;
int a[N][N], b[N][N];


int main()
{
	scanf("%d%d%d", &n, &m, &q);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j-1] + a[i][j];
		}
	}

	while (q--)
	{
		int x1, y1, x2, y2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		cout << b[x2][y2] - b[x1 - 1][y2] - b[x2][y1 - 1] + b[x1 - 1][y1 - 1]<<endl;

	}

	return 0;

}