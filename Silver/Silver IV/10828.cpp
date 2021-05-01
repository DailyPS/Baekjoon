#include <bits/stdc++.h>

using namespace std;

stack<int> s;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string command;

        cin >> command;

        if (!command.compare("push"))
        {

            int num;

            cin >> num;

            s.push(num);
        }

        else if (!command.compare("pop"))
        {

            if (!s.empty())
            {
                cout << s.top() << "\n";
                s.pop();
            }

            else
                cout << "-1" << "\n";
            
        }

        else if (!command.compare("size"))
        {
            cout << s.size() << "\n";
        }

        else if (!command.compare("empty"))
        {

            if (s.empty())
                cout << "1" << "\n";

            else
                cout << "0" << "\n";
        }

        else if (!command.compare("top"))
        {
            if (!s.empty())
                cout << s.top() << "\n";

            else
                cout << "-1" << "\n";
        }
    }

    return 0;
}