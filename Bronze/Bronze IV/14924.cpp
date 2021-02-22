#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int s, t, d;

    scanf("%d %d %d", &s, &t, &d);

    int time = d / (s * 2);
    int f = time * t;

    printf("%d", f);

    return 0;
}