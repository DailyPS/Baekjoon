#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    double num, circle, tcircle;
    cin >> num;
    circle = M_PI * num * num;
    tcircle = num * num * 2;
    cout << fixed;
    cout.precision(6);
    cout << circle << "\n" << tcircle;
    return 0;
}