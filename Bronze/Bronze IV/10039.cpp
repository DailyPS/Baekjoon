#include<iostream>

using namespace std;

int main(void)
{
    int score, sum = 0;
    for (int  i = 0; i < 5; i++)
    {
        cin >> score;
        if (score < 40)
            sum += 40;
        else
            sum += score;
    }
    cout << sum / 5 << endl;
    
    return 0;
}