#include<bits/stdc++.h>

using namespace std;

int n;
int max_ans = INT_MIN;
int min_ans = INT_MAX;
int n_list[20];
int oper[4];

void calc (int num, int index)
{
    if (index == n)
    {
        max_ans = max(num, max_ans);
        min_ans = min(num, min_ans);
        return;
    }

    for (int i = 1; i <= 4; i++)
    {
        int cal;

        if (oper[i] > 0)
        {
            switch(i)
            {
                case 1:
                    cal = num + n_list[index];
                    break;

                case 2:
                    cal = num - n_list[index];
                    break;

                case 3:
                    cal = num * n_list[index];
                    break;

                case 4:
                    cal = num / n_list[index];
                    break;
            }

            oper[i]--;
            calc(cal, index + 1);
            oper[i]++;
        }
    }
}

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &n_list[i]);

    for (int i = 1; i <= 4; i++)
        scanf("%d", &oper[i]);

    calc(n_list[0], 1);

    printf("%d\n%d", max_ans, min_ans);

    return 0;
}
