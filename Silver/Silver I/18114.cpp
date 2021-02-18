#include <bits/stdc++.h>

using namespace std;

int n, m;
int weight[5005];
bool weight_there[100000005];

int main() {
    bool ans = false;

    scanf("%d %d",&n ,&m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &weight[i]);
        weight_there[weight[i]] = true;
    }

    ans = weight_there[m];

    if(!ans)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (weight[i] + weight[j] == m)
                {
                    ans = true;
                    break;
                }

                else if (weight[i] + weight[j] < m)
                {
                    int res = m - (weight[i] + weight[j]);

                    if (weight_there[res] && res != weight[i] && res != weight[j])
                    {
                        ans = true;
                        break;
                    }
                }
            }
        }
    }

    printf("%d", ans);

	return 0;
}
