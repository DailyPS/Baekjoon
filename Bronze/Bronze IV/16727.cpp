#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ph, pa, eh, ea;

    scanf("%d %d", &ph, &ea);
    scanf("%d %d", &eh, &pa);
    
    if (ph + pa > eh + ea)
        printf("Persepolis");

    else if (ph + pa < eh + ea)
        printf("Esteghlal");

    else
    {
        if (pa > ea)
            printf("Persepolis");

        else if (pa < ea)
            printf("Esteghlal");

        else
            printf("Penalty");
    }

    return 0;
}