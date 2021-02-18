#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int Ash, Asm, Ast, Aeh, Aem, Aet;
    int Bsh, Bsm, Bst, Beh, Bem, Bet;
    int Csh, Csm, Cst, Ceh, Cem, Cet;
    int Aah, Aam, Aat;
    int Bah, Bam, Bat;
    int Cah, Cam, Cat;

    scanf("%d %d %d %d %d %d", &Ash, &Asm, &Ast, &Aeh, &Aem, &Aet);
    scanf("%d %d %d %d %d %d", &Bsh, &Bsm, &Bst, &Beh, &Bem, &Bet);
    scanf("%d %d %d %d %d %d", &Csh, &Csm, &Cst, &Ceh, &Cem, &Cet);

    Aah = Aeh - Ash; Aam = Aem - Asm; Aat = Aet - Ast;

    if (Aat < 0)
    {
        Aat += 60;
        Aam -= 1;
    }

    if (Aam < 0)
    {
        Aam += 60;
        Aah -= 1;
    }

    Bah = Beh - Bsh; Bam = Bem - Bsm; Bat = Bet - Bst;

    if (Bat < 0)
    {
        Bat += 60;
        Bam -= 1;
    }

    if (Bam < 0)
    {
        Bam += 60;
        Bah -= 1;
    }

    Cah = Ceh - Csh; Cam = Cem - Csm; Cat = Cet - Cst;

    if (Cat < 0)
    {
        Cat += 60;
        Cam -= 1;
    }

    if (Cam < 0)
    {
        Cam += 60;
        Cah -= 1;
    }

    printf("%d %d %d\n", Aah, Aam, Aat);
    printf("%d %d %d\n", Bah, Bam, Bat);
    printf("%d %d %d", Cah, Cam, Cat);

    return 0;
}
