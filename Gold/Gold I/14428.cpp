#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> number, seg;

int get_min_idx(int x, int y)
{
  if (x == -1)
    return y;

  if (y == -1)
    return x;

  if (number[x] == number[y])
    return min(x, y);
  
  else
    return (number[x] < number[y] ? x : y);
}

int init(int node, int start, int end)
{
  if (start == end)
    return seg[node] = start;

  else
    return seg[node] = get_min_idx(init(node * 2, start, (start + end) / 2), init(node * 2 + 1, (start + end) / 2 + 1, end));
}

void update(int node, int start, int end, int idx)
{ 
  if (idx < start || idx > end)
    return;

  if (start != end)
  {
    update(node * 2, start, (start + end) / 2, idx);
    update(node * 2 + 1, (start + end) / 2 + 1, end, idx);
    seg[node] = get_min_idx(seg[node * 2], seg[node * 2 + 1]);
  }
}

int get_min_node(int node, int start, int end, int left, int right)
{
  if (left > end || start > right)
    return -1;

  if (left <= start && end <= right)
    return seg[node];

  int lm = get_min_node(2 * node, start, (start + end) / 2, left, right);
  int rm = get_min_node(2 * node + 1, (start + end) / 2 + 1, end, left, right);
  return get_min_idx(lm, rm);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int tmp;

    cin >> tmp;

    number.push_back(tmp);
  }

  int h = (int)ceil(log2(n));
  int seg_sz = (1 << h + 1);
  seg.resize(seg_sz);

  init(1, 0, n - 1);

  cin >> m;

  while (m--)
  {
    int a;

    cin >> a;

    if (a == 1)
    {
      int b, c;

      cin >> b >> c;

      number[b - 1] = c;
      update(1, 0, n - 1, b - 1);
    }

    else
    {
      int b, c;
      
      cin >> b >> c;

      cout << get_min_node(1, 0, n - 1, b - 1, c - 1) + 1 << "\n";
    }
  }

  return 0;
}