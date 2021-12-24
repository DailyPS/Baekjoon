#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6;
int parent[MAX + 1];

int Find(int a)
{
	if (parent[a] == -1)
		return a;

	return parent[a] = Find(parent[a]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);

	if (a == b)
		return;

	parent[a] = b;
}

int main(void)
{
	int n, m;

	scanf("%d %d", &n, &m);

	memset(parent, -1, sizeof(parent));

	for (int i = 0; i < m; i++)
	{
		int x, a, b;

		scanf("%d %d %d", &x, &a, &b);

		if (!x)
			Union(a, b);

		else
		{
			if (Find(a) == Find(b))
				printf("YES\n");

			else
				printf("NO\n");
		}
	}

	return 0;
}