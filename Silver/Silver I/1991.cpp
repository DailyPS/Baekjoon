#include <bits/stdc++.h>

using namespace std;

int n;

vector<char> v[27];

void preorder_traversal(char c)
{
  if (c == '.')
    return;

  cout << c;
  preorder_traversal(v[c - 'A'][0]);
  preorder_traversal(v[c - 'A'][1]);
}

void inorder_traversal(char c)
{
  if (c == '.')
    return;

  inorder_traversal(v[c - 'A'][0]);
  cout << c;
  inorder_traversal(v[c - 'A'][1]);
}

void postorder_traversal(char c)
{
  if (c == '.')
    return;

  postorder_traversal(v[c - 'A'][0]);
  postorder_traversal(v[c - 'A'][1]);
  cout << c;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    char p, l, r;

    cin >> p >> l >> r;

    v[p - 'A'].push_back(l);
    v[p - 'A'].push_back(r);
  }

  preorder_traversal('A');
  cout << "\n";
  inorder_traversal('A');
  cout << "\n";
  postorder_traversal('A');

  return 0;
}