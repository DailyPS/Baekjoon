#include <iostream>
#include <algorithm>

using namespace std;

int number[20000];

int main(void)
{
	int num;
	int ans;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> number[i];
	}

	sort(number, number + num);

	for (int i = 0; i < num; i++)
	{
		if (num / 2)
			ans = number[(num / 2) - 1];

		else
			ans = number[num / 2];
	}

	printf("%d", ans);
}