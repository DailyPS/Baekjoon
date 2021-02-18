#include <bits/stdc++.h>

using namespace std;

int m;
char command, input;
string sen;
stack<char> c_left, c_right;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> sen;

    for (auto c : sen)
        c_left.push(c);

    cin >> m;

    while(m--)
    {
        cin >> command;

        switch(command)
        {
            case 'L':
                if(!c_left.empty())
                {
                    c_right.push(c_left.top());
                    c_left.pop();
                }
                break;

            case 'D':
                if(!c_right.empty())
                {
                    c_left.push(c_right.top());
                    c_right.pop();
                }
                break;

            case 'B':
                if(!c_left.empty())
                    c_left.pop();
                break;

            case 'P':
                cin >> input;
                c_left.push(input);
                break;
        }
    }

    while(!c_left.empty())
    {
        c_right.push(c_left.top());
        c_left.pop();
    }

    while(!c_right.empty())
    {
        cout << c_right.top();
        c_right.pop();
    }

    cout << endl;

    return 0;
}
