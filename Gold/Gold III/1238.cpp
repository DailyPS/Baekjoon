#include <bits/stdc++.h>

using namespace std;
typedef pair <int, int> P;

int n, m;
vector<P> lst[20005];
int dist[20005], path[20005];
bool check[20005];
const int INF = 1e9;

void dijkstra(int st)
{
	//Initializing
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	
	memset(check, false, sizeof(check));
	memset(path, -1, sizeof(path));
	dist[st] = 0;
	
	//Dijkstra
	priority_queue<P, vector<P>, greater<P>> PQ;
	PQ.push(P(0, st));
	
	while (!PQ.empty())
	{
		//Finding v
		int v;
		
		do
		{
			v = PQ.top().second;
			PQ.pop();
		} while (!PQ.empty() && check[v]);
		
		if (check[v])
			break;
		
		check[v] = true;
		
		for (int i = 0; i < lst[v].size(); i++)
		{
			int nxt = lst[v][i].first;
			int d = lst[v][i].second;
			
			if(!check[nxt] && dist[nxt] > dist[v] + d)
			{
				dist[nxt] = dist[v] + d;
				PQ.push(P(dist[nxt], nxt));
				path[nxt] = v;
			}
		}
	}
}

int main(void)
{
	int start, max = 0, route[20005] = { 0 };
	
	scanf("%d %d %d", &n, &m, &start);
	for(int i = 0; i < m; i++)
	{
		int u, v, w;
		
		scanf("%d %d %d", &u, &v, &w);
		lst[u].push_back(P(v, w));
	}
	
	dijkstra(start);
	
	for (int i = 1; i <= n; i++)
	{
		route[i] += dist[i];
	}
	
	for (int i = 1; i <= n; i++)
	{
		dijkstra(i);
		route[i] += dist[start];
	}
	
	for (int i = 1; i <= n; i++)
	{
		if (route[i] > max)
			max = route[i];
	}
	
	printf("%d", max);
	
	return 0;
}