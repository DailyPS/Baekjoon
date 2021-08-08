#include <bits/stdc++.h>

using namespace std;

map<string, int> book;
map<string, int>::iterator i;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int max_cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        if (book.find(s) != book.end())
            book[s]++;

        else
            book[s] = 1;
    }

    for (i = book.begin(); i != book.end(); i++)
    {
        if (max_cnt < i -> second)
            max_cnt = i -> second;
    }

    for (i = book.begin(); i != book.end(); i++)
    {
        if (max_cnt == i -> second)
        {
            cout << i -> first << "\n";
            break;
        }    
    }

    return 0;
}