#include <bits/stdc++.h>

using namespace std;

int n;

priority_queue<int> pq_p, pq_m;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int command;

    cin >> command;

    if (!command)
    {
      if (!pq_p.empty() && !pq_m.empty())
      {
        if (pq_p.top() == pq_m.top())
        {
          cout << pq_m.top() << "\n";
          pq_m.pop();
        }

        else if (pq_p.top() > pq_m.top())
        {
          cout << -pq_p.top() << "\n";
          pq_p.pop();
        }

        else
        {
          cout << pq_m.top() << "\n";
          pq_m.pop();
        }
      }

      else if (!pq_p.empty() && pq_m.empty())
      {
        cout << -pq_p.top() << "\n";
        pq_p.pop();
      }

      else if (pq_p.empty() && !pq_m.empty())
      {
        cout << pq_m.top() << "\n";
        pq_m.pop();
      }

      else
        cout << "0\n";
    }

    else if (command > 0)
      pq_p.push(-command);

    else
      pq_m.push(command);
  }

  return 0;
}