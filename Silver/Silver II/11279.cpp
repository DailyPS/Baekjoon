#include <bits/stdc++.h>

using namespace std;

int n;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  priority_queue<int> pq;

  for (int i = 0; i < n; i++)
  {
    int command;

    cin >> command;

    if (command)
      pq.push(command);

    else
    {
      if (!pq.empty())
      {
        cout << pq.top() << "\n";
        pq.pop();
      }

      else
        cout << "0" << "\n";
    }
  }

  return 0;
}