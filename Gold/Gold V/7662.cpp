#include <bits/stdc++.h>

using namespace std;

int t;

int main(void)
{
  //cin.tie(NULL);
  //ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n;
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    map<int, int> valid;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
      string command;
      int num;

      cin >> command >> num;

      if (!command.compare("I"))
      {
        max_heap.push(num);
        min_heap.push(num);
        valid[num]++;
      }

      else
      {
        if (num == 1)
        {
          while(!max_heap.empty() && valid[max_heap.top()] == 0)
            max_heap.pop();

          if (!max_heap.empty())
          {
            valid[max_heap.top()]--;
            max_heap.pop();
          }
        }

        else
        {
          while(!min_heap.empty() && valid[min_heap.top()] == 0)
            min_heap.pop();

          if (!min_heap.empty())
          {
            valid[min_heap.top()]--;
            min_heap.pop();
          }
        }
      }
    }

    while(!max_heap.empty() && valid[max_heap.top()] == 0)
      max_heap.pop();

    while(!min_heap.empty() && valid[min_heap.top()] == 0)
      min_heap.pop();

    if (!min_heap.empty())
      cout << max_heap.top() << " " << min_heap.top() << "\n";

    else
      cout << "EMPTY\n";
  }
  return 0;
}