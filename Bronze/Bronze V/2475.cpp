#include <iostream>

using namespace std;

int main(void)
{
	int num, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		sum += num * num;
	}

	sum %= 10;

	cout << sum;
}