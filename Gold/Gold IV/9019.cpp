#include <bits/stdc++.h>

using namespace std;

int t;
bool visited[10000];

int D(int num)
{
  return 2 * num % 10000;
}

int S(int num)
{
  return (num == 0 ? 9999 : num - 1);
}

int L(int num)
{
  int tmp = num % 1000;
  return tmp * 10 + num / 1000;
}

int R(int num)
{
  int tmp = num % 10;
  return tmp * 1000 + num / 10;
}

string bfs(int start, int fin)
{
  visited[start] = true;
  queue<pair<int, string>> q;
  q.push(make_pair(start, ""));

  while(!q.empty())
  {
    int num = q.front().first;
    string command = q.front().second;
    q.pop();

    if (num == fin)
      return command;

    int nxt = 0;
    nxt = D(num);

    if (!visited[nxt])
    {
      q.push(make_pair(nxt, command + "D"));
      visited[nxt] = true;
    } 

    nxt = S(num);

    if (!visited[nxt])
    {
      q.push(make_pair(nxt, command + "S"));
      visited[nxt] = true;
    }
    
    nxt = L(num);

    if (!visited[nxt])
    {
      q.push(make_pair(nxt, command + "L"));
      visited[nxt] = true;
    }

    nxt = R(num);

    if (!visited[nxt])
    {
      q.push(make_pair(nxt, command + "R"));
      visited[nxt] = true;
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int a, b;

    memset(visited, false, sizeof(visited));

    cin >> a >> b;

    cout << bfs(a, b) << "\n";
  }
  return 0;
}