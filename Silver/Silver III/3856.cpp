#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 1;
    string command;
    int num;
    while (1)
    {
        cin >> n;
        if (!n)
            break;

        int p1 = 0, p2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> command >> num;
            if (command.compare("DROP") == 0)
            {
                p2 += num;

                cout << "DROP 2 " << num << "\n";
            }
            else
            {
                int take = min(num, p1);

                if (take > 0)
                {
                    cout << "TAKE 1 " << take << "\n";
                    num -= take;
                    p1 -= take;
                }

                if (num != 0)
                {
                    cout << "MOVE 2->1 " << p2 << "\n";
                    p1 += p2;
                    p2 = 0;
                    
                    cout << "TAKE 1 " << num << "\n";
                    p1 -= num;
                }
            }
        }

        cout << "\n";
    }
}