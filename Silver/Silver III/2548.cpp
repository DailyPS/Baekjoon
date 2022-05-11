#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int number[20000];
int min_diff = INT_MAX;
int ans = 20001;

int main(void)
{
	int num;
	int ans;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> number[i];
	}

	for (int i = 0; i < num; i++) {
    int tmp_diff = 0;

    for (int j = 0; j < num; j++) {
      tmp_diff += abs(number[i] - number[j]);
    }

    if (tmp_diff < min_diff || (tmp_diff == min_diff && number[i] < ans)) {
      min_diff = tmp_diff;
      ans = number[i];
    }
  }

	printf("%d", ans);
}