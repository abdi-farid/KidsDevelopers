#include <stdio.h>

int main()
{

    /**
     * Un programme C qui demande d'entrer un nombre entier N,
     * puis affiche tous les nombres de N à 0 commençant par N
     * 
     * Exemple : 
     * Entrer le nombre N : 5
     * 5
     * 4
     * 3
     * 2
     * 1
     * 0
     */

    int i, N;

    printf("Entrer le nombre N : ");
    scanf("%d", &N);

    for (i = N; i >= 0; i--)
    {
        printf("%d\n", i);
    }
}