#include<iostream>

using namespace std;

int main(void)
{
    int a, b, c, fin;
    double result;
    
    cin >> a >> b >> c;
    result = (((a + 1) * (b + 1)) / (c + 1)) - 1;
    fin = static_cast<int>(result);
    
    cout << fin << endl;
    
    return 0;
}