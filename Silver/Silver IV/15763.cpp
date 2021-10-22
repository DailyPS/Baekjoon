#include <bits/stdc++.h>

using namespace std;

char TTT[3][3];
int single_cnt = 0;
int team_cnt = 0;

int cnt_single_win(char c)
{
  for (int i = 0; i < 3; i++)
  {
    if (TTT[0][i] == c && TTT[1][i] == c && TTT[2][i] == c)
      return 1;

    if (TTT[i][0] == c && TTT[i][1] == c && TTT[i][2] == c)
      return 1;
  }

  if (TTT[0][0] == c && TTT[1][1] == c && TTT[2][2] == c)
    return 1;
  
  if (TTT[0][2] == c && TTT[1][1] == c && TTT[2][0] == c)
    return 1;

  return 0;
}

bool check_ttt_compose(char c1, char c2, char t1, char t2, char t3)
{
  if (t1 != c1 && t1 != c2)
    return false;

  if (t2 != c1 && t2 != c2)
    return false;

  if (t3 != c1 && t3 != c2)
    return false;

  if (t1 != c1 && t2 != c1 && t3 != c1)
    return false;

  if (t1 != c2 && t2 != c2 && t3 != c2)
    return false;

  return true;
}

int cnt_team_win(char c1, char c2)
{
  for (int i = 0; i < 3; i++)
  {
    if (check_ttt_compose(c1, c2, TTT[0][i], TTT[1][i], TTT[2][i]))
      return 1;

    if (check_ttt_compose(c1, c2, TTT[i][0], TTT[i][1], TTT[i][2]))
      return 1;
  }

  if (check_ttt_compose(c1, c2, TTT[0][0], TTT[1][1], TTT[2][2]))
    return 1;

  if (check_ttt_compose(c1, c2, TTT[0][2], TTT[1][1], TTT[2][0]))
    return 1;

  return 0;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      cin >> TTT[i][j];
  }

  for (char c = 'A'; c <= 'Z'; c++)
    single_cnt += cnt_single_win(c);

  for (char c1 = 'A'; c1 <= 'Z'; c1++)
  {
    for (char c2 = c1 + 1; c2 <= 'Z'; c2++)
      team_cnt += cnt_team_win(c1, c2);
  }

  cout << single_cnt << "\n" << team_cnt;

  return 0;
}