#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	bitset<1005> a, b;
	bitset<1005> ans;

	cin >> a;

	b = a << 4;

	int carry = 0;

	for (int i = 0; i < 1005; i++)
    {
        int adder = a[i] ^ b[i] ^ carry;
        carry = (a[i] & b[i]) | (carry & (a[i] ^ b[i]));
        ans.set(i, adder);
    }

    int flag = 0;

    for (int i = 1004; i >= 0; i--)
    {
        if (!flag && ans[i])
            flag = 1;

        if (flag)
            cout << ans[i];
    }
}
