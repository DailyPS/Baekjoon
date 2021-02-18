#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    wchar_t ko = 0xAC00 + (n - 1);
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv_ko;

    cout << conv_ko.to_bytes(ko) << endl;

    return 0;
}
