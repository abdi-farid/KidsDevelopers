#include <stdio.h>

int main()
{
    /**
     * Un programme C qui demande à l'utilisateur d'entrer un nombre N,
     *                      1 - Affiche tous les nombres pairs entre 0 et N (N inclus)
     *                      2 - Affiche tous les nombres impairs entre 0 et N (N inclus)
     * séparément
     * **/

    int i, N;

    printf("Entrer le nombre N : ");
    scanf("%d", &N);

    printf("Les nombres pairs entre 0 et %d sont \n", N);

    for (i = 0; i < N + 1; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    printf("Les nombres impairs entre 0 et %d sont \n", N);
    for (i = 0; i < N + 1; i++)
    {
        if (i % 2 == 1)
            printf("%d\n", i);
    }
}