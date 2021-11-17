#include <bits/stdc++.h>

using namespace std;

int n;
int postorder[100005];
int inorder[100005], inorder_index[100005];

void get_preorder(int istart, int iend, int postart, int poend)
{
  if (istart > iend || postart > poend)
    return;

  int root_index = inorder_index[postorder[poend]];
  int sz_left = root_index - istart;

  cout << inorder[root_index] << " ";
  
  get_preorder(istart, root_index - 1, postart, postart + sz_left - 1);
  get_preorder(root_index + 1, iend, postart + sz_left, poend - 1);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> inorder[i];
    inorder_index[inorder[i]] = i;
  }

  for (int i = 1; i <= n; i++)
    cin >> postorder[i];

  get_preorder(1, n, 1, n);

  return 0;
}