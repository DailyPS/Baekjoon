#include<iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c - b <= 0)
        cout << -1 << endl;
    else
        cout << a / (c - b) + 1 << endl;
    
    return 0;
}