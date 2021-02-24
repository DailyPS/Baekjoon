#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int by, bm, bd;
    int sy, sm, sd;

    scanf("%d %d %d", &by, &bm, &bd);
    scanf("%d %d %d", &sy, &sm, &sd);

    // 만 나이 -> 세는 나이 -> 연 나이 순으로 출력

    // 만 나이
    printf("%d\n", sm > bm || (sm == bm && sd >= bd) ? sy - by : sy - by - 1);
    printf("%d\n", sy - by + 1);
    printf("%d", sy - by);

    return 0;
}