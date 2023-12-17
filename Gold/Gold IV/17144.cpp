#include <bits/stdc++.h>

using namespace std;

int r, c, t;
int room[55][55];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

queue<pair<int, int>> air_cleaner;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> r >> c >> t;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> room[i][j];

      if (room[i][j] == -1) {
        air_cleaner.push(make_pair(i, j));
      }
    }
  }

  //cout << "\n";

  for (int i = 0; i < t; i++) {
    // 1. Fine dust diffusion
    int dust_diffusion_sum[55][55] = { 0 };

    for (int j = 0; j < r; j++) {
      for (int k = 0; k < c; k++) {
        if (room[j][k] == -1 || room[j][k] == 0)
          continue;

        int diffusion_amount = room[j][k] / 5;

        for (int l = 0; l < 4; l++) {
          int nx = k + dx[l];
          int ny = j + dy[l];

          if (nx < 0 || ny < 0 || nx >= c || ny >= r || room[ny][nx] == -1)
            continue;

          dust_diffusion_sum[ny][nx] += diffusion_amount;
          dust_diffusion_sum[j][k] -= diffusion_amount;
        }
      }
    }

    for (int j = 0; j < r; j++) {
      for (int k = 0; k < c; k++) {
        room[j][k] += dust_diffusion_sum[j][k];
      }
    }

    /*for (int j = 0; j < r; j++) {
      for (int k = 0; k < c; k++) {
        cout << room[j][k] << " ";
      }
      cout << "\n";
    }

    cout << "\n";*/

    // 2. Running Air-cleaner
    // 2-1. Run upper-side Air-cleaner
    int uy = air_cleaner.front().first;
    int ux = air_cleaner.front().second;
    int dd[4] = { 3, 0, 1, 2 };

    int ddy = abs(uy - 0);

    for (int j = 0; j < 4; j++) {
      int direction = dd[j];
      int loop_count = direction % 2 == 1 ? ddy : c - 1;

      for (int k = 0; k < loop_count; k++) {
        int nx = ux + dx[direction];
        int ny = uy + dy[direction];

        if (room[ny][nx] == -1)
          continue;

        int tmp_dust = room[ny][nx];
        room[ny][nx] = 0;

        if (room[uy][ux] != -1) {
          room[uy][ux] = tmp_dust;
        }

        ux += dx[direction];
        uy += dy[direction];
      }
    }

    /*for (int j = 0; j < r; j++) {
      for (int k = 0; k < c; k++) {
        cout << room[j][k] << " ";
      }
      cout << "\n";
    }

    cout << "\n";*/

    // 2-2. Run down-side Air-cleaner
    uy = air_cleaner.back().first;
    ux = air_cleaner.back().second;
    int ddd[4] = { 1, 0, 3, 2 };

    ddy = abs(uy - r) - 1;

    for (int j = 0; j < 4; j++) {
      int direction = ddd[j];
      int loop_count = direction % 2 == 1 ? ddy : c - 1;

      for (int k = 0; k < loop_count; k++) {
        int nx = ux + dx[direction];
        int ny = uy + dy[direction];

        if (room[ny][nx] == -1)
          continue;

        int tmp_dust = room[ny][nx];
        room[ny][nx] = 0;

        if (room[uy][ux] != -1) {
          room[uy][ux] = tmp_dust;
        }

        ux += dx[direction];
        uy += dy[direction];
      }
    }

    /*int ans = 0;

    for (int j = 0; j < r; j++) {
      for (int k = 0; k < c; k++) {
        ans += room[j][k];
      }
    }

    cout << "Time : " << i + 1 << "\tDust : " << ans + 2 << "\n";*/
  }

  int ans = 0;

  for (int j = 0; j < r; j++) {
    for (int k = 0; k < c; k++) {
      ans += room[j][k];
    }
  }

  cout << ans + 2;

  return 0;
}