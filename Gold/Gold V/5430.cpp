#include <bits/stdc++.h>

using namespace std;

int t;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    string func, arr;
    int arr_sz;
    bool fr = true, flag = false;
    deque<int> dq;

    cin >> func >> arr_sz >> arr;

    int sz = arr.size();
    int i = 0;

    while (i < sz)
    {
      int tmp = 0;

      while (arr[i] >= '0' && arr[i] <= '9')
      {
        tmp = tmp * 10 + arr[i] - '0';
        i++;
      }

      if (tmp != 0)
        dq.push_back(tmp);
      
      i++;
    }

    int func_sz = func.size();

    for (int i = 0; i < func_sz; i++)
    {
      if (func[i] == 'R')
        fr = !fr;

      else
      {
        if (arr_sz == 0)
        {
          cout << "error\n";
          flag = true;
          break;
        }

        else if (fr)
        {
          dq.pop_front();
          arr_sz--;
        }

        else
        {
          dq.pop_back();
          arr_sz--;
        }
      }
    }

    if (!flag)
    {
      cout << "[";

      if (fr)
      {
        for (int i = 0; i < arr_sz - 1; i++)
          cout << dq[i] << ",";

        if (arr_sz > 0)
          cout << dq[arr_sz - 1];
      }

      else
      {
        for (int i = arr_sz - 1; i > 0; i--)
          cout << dq[i] << ",";

        if (arr_sz > 0)
          cout << dq[0];
      }
      
      cout << "]\n";
    }
  }
  return 0;
}