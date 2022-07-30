#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string first, second;

    cin >> first >> second;

    int first_a = first.length() - 2;
    int second_a = second.length() - 2;

    if (first_a >= second_a)
        cout << "go";

    else
        cout << "no";

    return 0;
}