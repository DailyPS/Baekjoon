#include<iostream>

using namespace std;

int main(void)
{
    int l, p;
    cin >> l >> p;
    int tot = l * p;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a - tot << " " << b - tot << " " << c - tot << " " << d - tot << " " << e - tot << endl;
}