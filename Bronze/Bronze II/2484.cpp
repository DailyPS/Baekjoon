#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int max_cost = INT_MIN;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> dice;
        int dice_num;

        for (int j = 0; j < 4; j++)
        {
            cin >> dice_num;
            dice.push_back(dice_num);
        }

        sort(dice.begin(), dice.end(), greater<>());

        if (dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3])
        {
            int money = 50000 + dice[0] * 5000;

            if (money > max_cost)
                max_cost = money;
        }

        else if (dice[0] == dice[1] && dice[1] == dice[2])
        {
            int money = 10000 + dice[0] * 1000;

            if (money > max_cost)
                max_cost = money;
        }

        else if (dice[1] == dice[2] && dice[2] == dice[3])
        {
            int money = 10000 + dice[1] * 1000;

            if (money > max_cost)
                max_cost = money;
        }

        else if (dice[0] == dice[1] && dice[2] == dice[3])
        {
            int money = 2000 + dice[0] * 500 + dice[2] * 500;

            if (money > max_cost)
                max_cost = money;
        }

        else if (dice[0] == dice[1])
        {
            int money = 1000 + dice[0] * 100;

            if (money > max_cost)
                max_cost = money;
        }

        else if (dice[1] == dice[2])
        {
            int money = 1000 + dice[2] * 100;

            if (money > max_cost)
                max_cost = money;
        }

        else if (dice[2] == dice[3])
        {
            int money = 1000 + dice[3] * 100;

            if (money > max_cost)
                max_cost = money;
        }

        else
        {
            int money = dice[0] * 100;

            if (money > max_cost)
                max_cost = money;
        }
    }

    cout << max_cost;

    return 0;
}