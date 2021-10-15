#include <bits/stdc++.h>

using namespace std;

int n;
int dist[105][105];
const int INF = 1e9;

int main(void)
{
	int m, a, b, min_num = 999, min_person;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		
		dist[a][b] = 1; dist[b][a] = 1;
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
		int k_num = 0;
		
		for (int j = 1; j <= n; j++)
		{
			k_num += dist[i][j];
		}
		
		if (k_num < min_num){ 
			min_num = k_num; 
			min_person = i;
		}
	}
	
	printf("%d", min_person);
	
	return 0;
}