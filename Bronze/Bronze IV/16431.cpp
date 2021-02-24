#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int br, bc, dr, dc, jr, jc;

    scanf("%d %d %d %d %d %d", &br, &bc, &dr, &dc, &jr, &jc);

    int bm = max(abs(br - jr), abs(bc - jc));
    int dm = abs(dr - jr) + abs(dc - jc);

    if (bm < dm)
        printf("bessie");

    else if (bm > dm)
        printf("daisy");

    else
        printf("tie");

    return 0;
}