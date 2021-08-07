#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int case_no = 1;

    while(true)
    {
        string s1, s2;
        int a1_check[30] = { 0 };
        int a2_check[30] = { 0 };

        cin >> s1 >> s2;

        if (!s1.compare("END"))
            break;

        int l1 = s1.length();
        int l2 = s2.length();

        if (l1 != l2)
            cout << "Case " << case_no << ": different\n";

        else
        {
            bool flag = true;
            
            for (int i = 0; i < l1; i++)
                a1_check[s1[i]- 'a']++;

            for (int i = 0; i < l1; i++)
                a2_check[s2[i]- 'a']++;

            for (int i = 0; i < 26; i++)
            {
                if (a1_check[i] != a2_check[i])
                {
                    cout << "Case " << case_no << ": different\n";
                    flag = false;
                    break;
                }
            }

            if (flag)
                cout << "Case " << case_no << ": same\n";
        }

        case_no++;
    }

    return 0;
}