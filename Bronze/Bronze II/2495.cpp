#include <iostream>

using namespace std;

int main(void)
{
	int num[3][9];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 8; j++)
			scanf("%1d", &num[i][j]);
	}

	num[0][8] = 10; num[1][8] = 10; num[2][8] = 10;

	for (int i = 0; i < 3; i++)
	{
		int same_count = 1;
		int max = 0;

		for (int j = 0; j <= 7; j++)
		{
			if (num[i][j] == num[i][j + 1])
				same_count++;

			else
			{
				if (max < same_count)
					max = same_count;
				same_count = 1;
			}
		}

		printf("%d\n", max);
	}

	return 0;
}