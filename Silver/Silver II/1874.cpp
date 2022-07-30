#include <bits/stdc++.h>

using namespace std;

stack<int> s;
vector<char> v;

int arr[100005] = { 0 };

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    int now = 1;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (s.empty() || arr[i] != s.top())
        {
            for (; now <= arr[i]; now++)
            {
                s.push(now);
                v.push_back('+');
            }

            if (arr[i] == s.top())
            {
                s.pop();
                v.push_back('-');
            }
        }

        else if (!s.empty() && arr[i] == s.top())
        {
            s.pop();
            v.push_back('-');
        }
    }

    if (!s.empty())
        printf("NO");

    else
    {
        for (int i = 0; i < v.size(); i++)
            printf("%c\n", v[i]);
    }

    return 0;
}