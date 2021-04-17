#include <bits/stdc++.h>

using namespace std;

vector<int> number;

int main(void)
{
    int num;

    while(scanf("%1d", &num) > 0)
        number.push_back(num);

    sort(number.begin(), number.end(), greater<>());

    for (int i = 0; i < number.size(); i++)
        printf("%d", number[i]);

    return 0;
}