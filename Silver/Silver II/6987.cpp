#include <bits/stdc++.h>

using namespace std;

int result[6][3];

bool game_check()
{
    return accumulate(&result[0][0], &result[6][3], 0) == 30;
}

bool right(int r_count, int home, int away)
{
    if (r_count == 15)
        return true;

    int new_home, new_away;

    if (away == 5)
    {
        new_home = home + 1;
        new_away = home + 2;
    }

    else
    {
        new_home = home;
        new_away = away + 1;
    }

    bool tmp = false;

    for (int i = 0; i < 3; i++)
    {
        if (result[home][i] > 0 && result[away][2 - i] > 0)
        {
            result[home][i]--;
            result[away][2 - i]--;

            if (right(r_count + 1, new_home, new_away))
                tmp = true;

            result[home][i]++;
            result[away][2 - i]++;
        }
    }

    return tmp;
}

int main(void)
{
    for (int t = 0; t < 4; t++)
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
                scanf("%d", &result[i][j]);
        }

        printf("%d ", game_check() && right(0, 0, 1));
    }

    printf("\n");

    return 0;
}
