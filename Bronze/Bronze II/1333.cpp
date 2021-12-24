#include <bits/stdc++.h>

using namespace std;

vector<int> music;

int main(void)
{
    int n, l, d;
    int ring = 0;

    scanf("%d %d %d", &n, &l, &d);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
            music.push_back(1);

        for (int j = 0; j < 5; j++)
            music.push_back(0);
    }

    while(true)
    {
        if (ring > music.size())
            break;

        if (music[ring] == 0)
            break;

        else
            ring += d;
    }

    printf("%d", ring);

    return 0;
}