#include<iostream>

using namespace std;

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int tot = a + b + c + d;
    cout << tot / 60 << endl;
    cout << tot % 60 << endl;
    
    return 0;
}