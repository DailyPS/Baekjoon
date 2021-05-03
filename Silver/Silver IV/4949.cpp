#include <bits/stdc++.h>

using namespace std;



int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while(true)
    {
        stack<char> bracket;
        bool balance = true;

        getline(cin, str);

        if (!str.compare("."))
            break;

        while(!bracket.empty())
            bracket.pop();

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                bracket.push(str[i]);

            else if (str[i] == ')')
            {
                if (!bracket.empty() && bracket.top() == '(')
                    bracket.pop();

                else
                {
                    balance = false;
                    break;
                }
            }

            else if (str[i] == ']')
            {
                if (!bracket.empty() && bracket.top() == '[')
                    bracket.pop();

                else
                {
                    balance = false;
                    break;
                }
            }
        }

        if (bracket.empty() && balance)
            cout << "yes\n";

        else
            cout << "no\n";
    }

    return 0;
}