#include<iostream>

using namespace std;

int main(void)
{
    int y;
		cin >> y;
    if (y % 4 == 0)
		{
			if (y % 25 == 0)
			{
				if (y % 400 == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
			}  
      else
          cout << 1 << endl;
		}
    else
        cout << 0 << endl;
    
    return 0;
}