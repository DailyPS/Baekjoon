#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int v;
    string vote;

    cin >> v;
    cin >> vote;

    int va = 0, vb = 0;

    for (int i = 0; i < vote.size(); i++)
    {
        if (vote[i] == 'A')
            va++;

        else
            vb++;
    }

    if (va > vb)
        printf("A");

    else if (va < vb)
        printf("B");

    else
        printf("Tie");

    return 0;
}