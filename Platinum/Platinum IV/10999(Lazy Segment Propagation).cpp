#include <bits/stdc++.h>

using namespace std;

int n, m, k;
vector<long long int> number, seg, lazy;

long long int init(int node, int start, int end)
{
  if (start == end)
    return seg[node] = number[start];

  else
    return seg[node] = init(node * 2, start, (start + end) / 2) + init(node * 2 + 1, (start + end) / 2 + 1, end);
}

void update_lazy(int node, int start, int end)
{
  if (lazy[node] != 0)
  {
    seg[node] += (end - start + 1) * lazy[node];

    if (start != end)
    {
      lazy[2 * node] += lazy[node];
      lazy[2 * node + 1] += lazy[node];
    }

    lazy[node] = 0;
  }
}

void update(int node, int start, int end, int left, int right, long long int diff)
{
  update_lazy(node, start, end);

  if (left > end || right < start)
    return;

  if (left <= start && end <= right)
  {
    seg[node] += (end - start + 1) * diff;

    if (start != end)
    {
      lazy[2 * node] += diff;
      lazy[2 * node + 1] += diff;
    }
    return;
  }

  update(node * 2, start, (start + end) / 2, left, right, diff);
  update(node * 2 + 1, (start + end) / 2 + 1, end, left, right, diff);
  seg[node] = seg[2 * node] + seg[2 * node + 1];
}

long long int get_sum(int node, int start, int end, int left, int right)
{
  update_lazy(node, start, end);

  if (left > end || start > right)
    return 0;

  if (left <= start && end <= right)
    return seg[node];

  return get_sum(node * 2, start, (start + end) / 2, left, right) + get_sum(node * 2 + 1, (start + end) / 2 + 1, end, left, right);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> k;

  for (int i = 0; i < n; i++)
  {
    long long int tmp;

    cin >> tmp;

    number.push_back(tmp);
  }

  int h = (int)ceil(log2(n));
  int seg_sz = (1 << h + 1);
  seg.resize(seg_sz);
  lazy.resize(seg_sz);

  init(1, 0, n - 1);

  while (m || k)
  {
    int a;

    cin >> a;

    if (a == 1)
    {
      int b, c;
      long long int d;

      cin >> b >> c >> d;

      number[b - 1] = c;
      update(1, 0, n - 1, b - 1, c - 1, d);
      m--;
    }

    else
    {
      int b, c;
      
      cin >> b >> c;

      cout << get_sum(1, 0, n - 1, b - 1, c - 1) << "\n";
      k--;
    }
  }

  return 0;
}