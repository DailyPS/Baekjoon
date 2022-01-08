#include <bits/stdc++.h>

using namespace std;

int d;
string start_word;
string ans = "";
vector<string> dict;
vector<int> g[1005];

void dfs(int n)
{
  if (ans.length() < dict[n].length())
    ans = dict[n];

  for (auto &e : g[n])
    dfs(e);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> d >> start_word;

  for (int i = 0; i < d; i++)
  {
    string word;
    cin >> word;
    dict.push_back(word);
  }

  int s_idx;

  for (int i = 0; i < d; i++)
  {
    if (!dict[i].compare(start_word))
      s_idx = i;
  }

  for (int i = 0; i < d; i++)
  {
    for (int j = 0; j < d; j++)
    {
      if (dict[i].length() + 1 == dict[j].length())
      {
        bool connect = true;
        bool added = false;

        int root_idx = 0;
        int leaf_sz = dict[j].size();

        for (int k = 0; k < leaf_sz; k++)
        {
          if (dict[i][root_idx] != dict[j][k])
          {
            if (added)
              connect = false;

            added = true;
          }

          else
            root_idx++;
        }

        if (connect)
          g[i].push_back(j);
      }
    }
  }

  dfs(s_idx);

  cout << ans;

  return 0;
}