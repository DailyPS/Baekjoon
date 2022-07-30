#include <bits/stdc++.h>

using namespace std;

int arr[10];

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int max_num = INT_MIN;
    int max_idx;

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];

        if (max_num < arr[i])
        {
            max_num = arr[i];
            max_idx = i + 1;
        }
    }

    cout << max_num << "\n" << max_idx;

    return 0;
}