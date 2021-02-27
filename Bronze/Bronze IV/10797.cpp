#include<iostream>

using namespace std;

int main(void)
{
    int check, num, count = 0;
    cin >> check;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if (num == check)
            count++;
    }
    cout << count << endl;
    
    return 0;
}