#include <bits/stdc++.h>

using namespace std;

int n, m;
const long long int INF = 1e9;
vector<long long int> number, seg;

long long int init(int node, int start, int end)
{
  if (start == end)
    return seg[node] = number[start];

  else
    return seg[node] = min(init(node * 2, start, (start + end) / 2), init(node * 2 + 1, (start + end) / 2 + 1, end));
}

void update(int node, int start, int end, int idx)
{
  if (idx < start || idx > end)
    return;

  if (start == end)
    seg[node] = number[idx];

  else
  {
    update(node * 2, start, (start + end) / 2, idx);
    update(node * 2 + 1, (start + end) / 2 + 1, end, idx);
    seg[node] = min(seg[node * 2], seg[node * 2 + 1]);
  }
}

long long int get_min_node(int node, int start, int end, int left, int right)
{
  if (left > end || start > right)
    return INF;

  if (left <= start && end <= right)
    return seg[node];

  long long int lm = get_min_node(2 * node, start, (start + end) / 2, left, right);
  long long int rm = get_min_node(2 * node + 1, (start + end) / 2 + 1, end, left, right);
  return min(lm, rm);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    long long int tmp;

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
      int b;
      long long int c;

      cin >> b >> c;

      number[b - 1] = c;
      update(1, 0, n - 1, b - 1);
    }

    else
    {
      int b, c;
      
      cin >> b >> c;

      cout << get_min_node(1, 0, n - 1, b - 1, c - 1) << "\n";
    }
  }

  return 0;
}