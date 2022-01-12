#include <bits/stdc++.h>

using namespace std;

string num;
int k;

void bfs()
{
  queue<string> q;
  q.push(num);
  
  int change_cnt = 0;
  int max_num = INT_MIN;

  while (!q.empty() && change_cnt < k)
  {
    int sz = q.size();
    set<string> visited;

    for (int i = 0; i < sz; i++)
    {
      string cur_num = q.front();
      int len = cur_num.length();
      q.pop();

      for (int j = 0; j < len - 1; j++)
      {
        for (int l = j + 1; l < len; l++)
        {
          if (j == 0 && cur_num[j] == '0')
            continue;

          swap(cur_num[j], cur_num[l]);

          if (visited.find(cur_num) == visited.end())
          {
            if (change_cnt == k - 1 && max_num < stoi(cur_num))
              max_num = max(max_num, stoi(cur_num));

            q.push(cur_num);
            visited.insert(cur_num);
          }

          swap(cur_num[j], cur_num[l]);
        }
      }
    }

    change_cnt++;
  }

  if (change_cnt != k)
    cout << "-1";

  else
    cout << max_num;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> num >> k;

  if (num.length() == 1 || (num.length() == 2 && num[1] == '0'))
  {
    cout << "-1";
    return 0;
  }

  bfs();

  return 0;
}