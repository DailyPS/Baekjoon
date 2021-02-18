#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l, a, b, c, d;

    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);

    int math, kor;
    int flag = 0;

    math = a / c;
    flag = a % c;

    if(flag)
        math += 1;

    kor = b / d;
    flag = b % d;

    if(flag)
        kor += 1;

    if (math >= kor)
        printf("%d", l - math);

    else
        printf("%d", l - kor);

    return 0;
}
