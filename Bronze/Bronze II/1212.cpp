#include <bits/stdc++.h>

using namespace std;

int ans[1000005];

int main(void)
{
    char num[340000];

    scanf("%s", num);

    int num_len = strlen(num);
    int ans_len = 0;

    while(num_len > 0)
    {
        int temp1 = num[num_len - 1] - '0';
        //printf("temp1 : %d\n", temp1);

        while (temp1 > 0)
        {
            int temp2 = temp1 % 2;

            ans[ans_len++] = temp2;
            temp1 /= 2;
            //printf("temp2 : %d\n", temp2);
        }

        num_len--;
        //printf("num_len : %d\n", num_len);
        //printf("ans_len : %d\n", ans_len);

        while ((ans_len % 3) && num_len > 0)
        {
            ans[ans_len++] = 0;
            //printf("Check!\n");
        }

        //printf("ans_len : %d\n", ans_len);

        if ((num[num_len] - '0') == 0 && num_len > 0)
        {
            //printf("Check Blank!\n");
            ans[ans_len] = 0;
            ans[ans_len + 1] = 0;
            ans[ans_len + 2] = 0;
            ans_len += 3;
        }

        //printf("ans_len : %d\n", ans_len);
    }

    if (!ans_len)
        printf("%d", 0);

    for (int i = ans_len - 1; i >= 0; i--)
        printf("%d", ans[i]);

    return 0;
}
