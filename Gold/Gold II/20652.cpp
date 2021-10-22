#include <bits/stdc++.h>

using namespace std;

int n;
int cur_time = 0;

typedef struct Cow {
  int x, y;
  int eaten;
  char dir;
} cow;

cow c[55];

int get_stuck_time(int a, int b)
{
  cow A = c[a];
  cow B = c[b];

  if (A.dir == B.dir)
    return INT_MAX;

  // Assume that cow a goes to east and cow b goes to north
  if (A.dir == 'N')
  {
    swap(A.x, A.y);
    swap(B.x, B.y);
  }

  if (A.x >= B.x)
    return INT_MAX;

  if (B.eaten == INT_MAX)
  {
    if (A.y < B.y - cur_time || A.y >= B.y + (B.x - A.x))
      return INT_MAX;
  }

  else
  {
    if (A.y > B.y || A.y < B.y - B.eaten)
      return INT_MAX;
  }

  return cur_time + B.x - A.x;
}

int move_cow(void)
{
  int stuck_time[55];
  int min_time = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    stuck_time[i] = INT_MAX;

    if (c[i].eaten == INT_MAX)
    {
      for (int j = 0; j < n; j++)
      {
        int t = get_stuck_time(i, j);
        stuck_time[i] = min(stuck_time[i], t);
      }

      min_time = min(min_time, stuck_time[i]);
    }
  }

  if (min_time == INT_MAX)
    return INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (c[i].eaten == INT_MAX)
    {
      if (c[i].dir == 'E')
        c[i].x += (min_time - cur_time);
      
      else
        c[i].y += (min_time - cur_time);
    }

    if (stuck_time[i] == min_time)
      c[i].eaten = min_time;
  }

  return min_time;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> c[i].dir >> c[i].x >> c[i].y;
    c[i].eaten = INT_MAX;
  }

  while (cur_time != INT_MAX)
    cur_time = move_cow();


  for (int i = 0; i < n; i++)
  {
    if (c[i].eaten == INT_MAX)
      cout << "Infinity\n";

    else
      cout << c[i].eaten << "\n";
  }

  return 0;
}