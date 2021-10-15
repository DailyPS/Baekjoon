#include <bits/stdc++.h>

using namespace std;

int n;
int dist[105][105];
const int INF = 1e9;

int main(void)
{
	int m, a, b;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		
		dist[a][b] = 1;
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (dist[i][j] == 0 && i != j)
				dist[i][j] = INF;
		}
	}
	
	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (dist[i][j] == INF)
				dist[i][j] = 0;
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if(!dist[i][j])
				dist[i][j] = dist[j][i];
			
			else
				dist[j][i] = dist[i][j];
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
		int num = 0, zero_count = 0;
		
		for (int j = 1; j <= n; j++)
		{
			if(!dist[i][j])
				zero_count++;
		}
		
		num = zero_count - 1;
		printf("%d\n", num);
	}

	return 0;
}