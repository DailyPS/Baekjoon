#include <bits/stdc++.h>

using namespace std;

int n, m;
int people[200005];

vector<int> rel[200005];
queue<int> infect;
queue<int> infect_com;

void bfs()
{
  while(!infect.empty())
  {
    int now = infect.front();
    infect.pop();

    for (auto& i : rel[now])
    {
      if (people[i] == -1)
      {
        int sz = rel[i].size();
        int infect_cnt = 0;

        for (auto &j : rel[i])
        {
          if (people[j] != -1)
            infect_cnt++;
        }

        if (infect_cnt * 2 >= sz)
          infect_com.push(i);
      }
    }

    if (infect.empty())
    {
      while(!infect_com.empty())
      {
        int tar = infect_com.front();
        infect_com.pop();
        people[tar] = people[now] + 1;
        infect.push(tar);
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  memset(people, -1, sizeof(people));

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    while(true)
    {
      int p;

      cin >> p;

      if (!p)
        break;

      rel[i].push_back(p);
    }
  }

  cin >> m;

  for (int i = 0; i < m; i++)
  {
    int f;

    cin >> f;

    people[f] = 0;
    infect.push(f);
  }

  bfs();

  for (int i = 1; i <= n; i++)
    cout << people[i] << " ";

  return 0;
}