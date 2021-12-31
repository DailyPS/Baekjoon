#include <bits/stdc++.h>

using namespace std;

struct edge {
  int v1, v2, dist;

  edge(int a, int b, int c) {
    v1 = a;
    v2 = b;
    dist = c;
  }

  bool operator < (const edge& a) {
    return dist < a.dist;
  }
};

// Input
int n, m, ans = 0;
int key_sz, key_num = 1, key_pos[55][55];
vector<string> board;
pair<int, int> start_pos;
vector<pair<int, int>> keys;

// for BFS
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
bool visited[55][55];
int dist[55][55];

// for MST
int parent[10005];
vector<edge> g;

int bfs(int x, int y, int parent)
{
  memset(visited, 0, sizeof(visited));
  memset(dist, 0, sizeof(dist));
  int key_cnt = 1;

  queue<pair<int, int>> q;
  q.push(make_pair(x, y));
  visited[y][x] = true;

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= n)
        continue;

      if (visited[ny][nx] || board[ny][nx] == '1')
        continue;

      dist[ny][nx] = dist[y][x] + 1;
      visited[ny][nx] = true;

      if (board[ny][nx] == 'K')
      {
        key_cnt++;
        g.push_back({ parent, key_pos[ny][nx], dist[ny][nx] });
      }

      if (key_cnt == key_sz)
        return key_cnt;

      q.push(make_pair(nx, ny));
    }
  }

  return key_cnt;
}

int find(int x) {
  if (x == parent[x])
    return x;

  return parent[x] = find(parent[x]);
}

bool merge(int x, int y) {
  x = find(x);
  y = find(y);

  if (x == y)
    return false;

  parent[x] = y;
  return true;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    int len = s.length();

    for (int j = 0; j < len; j++)
    {
      if (s[j] == 'S')
      {
        start_pos.first = j;
        start_pos.second = i;
        s[j] = 'K';
      }

      if (s[j] == 'K')
      {
        keys.push_back(make_pair(j, i));
        key_pos[i][j] = key_num++;
      }
    }

    board.push_back(s);
  }

  key_sz = keys.size();

  for (auto e : keys)
  {
    if (bfs(e.first, e.second, key_pos[e.second][e.first]) != key_sz)
    {
      cout << "-1"; 
      return 0;
    }
  }

  sort(g.begin(), g.end());

  for (int i = 1; i <= key_sz; i++)
    parent[i] = i;

  int sz = g.size();

  for (int i = 0; i < sz; i++)
  {
    if (merge(g[i].v1, g[i].v2))
      ans += g[i].dist;
  }

  cout << ans;

  return 0;
}