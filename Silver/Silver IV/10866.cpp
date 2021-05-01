#include <bits/stdc++.h>

using namespace std;

deque<int> q;

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

        if (!command.compare("push_front"))
        {

            int num;

            cin >> num;

            q.push_front(num);
        }

        else if (!command.compare("push_back"))
        {

            int num;

            cin >> num;

            q.push_back(num);
        }

        else if (!command.compare("pop_front"))
        {

            if (!q.empty())
            {
                cout << q.front() << "\n";
                q.pop_front();
            }

            else
                cout << "-1" << "\n";
            
        }

        else if (!command.compare("pop_back"))
        {

            if (!q.empty())
            {
                cout << q.back() << "\n";
                q.pop_back();
            }

            else
                cout << "-1" << "\n";
            
        }

        else if (!command.compare("size"))
        {
            cout << q.size() << "\n";
        }

        else if (!command.compare("empty"))
        {

            if (q.empty())
                cout << "1" << "\n";

            else
                cout << "0" << "\n";
        }

        else if (!command.compare("front"))
        {
            if (!q.empty())
                cout << q.front() << "\n";

            else
                cout << "-1" << "\n";
        }

        else if (!command.compare("back"))
        {
            if (!q.empty())
                cout << q.back() << "\n";

            else
                cout << "-1" << "\n";
        }
    }

    return 0;
}