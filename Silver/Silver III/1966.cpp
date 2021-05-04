#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int n, m;
        int priority[10] = { 0 };

        queue<pair<int, int>> print;

        scanf("%d %d", &n, &m);

        for (int i = 0; i < n; i++)
        { 
            int doc;

            scanf("%d", &doc);

            priority[doc]++;

            print.push(make_pair(i, doc));
        }

        bool flag = false;
        int ans = 0;

        for (int i = 9; i >= 1; i--)
        {
            while (priority[i] > 0)
            {
                if (flag)
                    break;
                
                if (print.front().second != i)
                {
                    print.push(print.front());
                    print.pop();
                }   

                else
                {
                    if (print.front().first == m)
                        flag = true;

                    print.pop();
                    ans++;
                    priority[i]--;
                }
            }

            if (flag)
                break;
        }

        printf("%d\n", ans);

        t--;
    }

    return 0;
}