#include <stdio.h>

int main()
{

    /**
     * Un programme en C qui demande à l'utilisateur d'entrer un mot, puis un nombre entier N
     * affiche en sortie le mot N fois
    */
    int i, N;
    char chaine[100];

    printf("entrer la chaine de caracteres que vous voulez afficher  : ");
    scanf("%s", chaine);

    printf("entrer le nombre de fois que vous voulez afficher la chaine : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("%s \n", chaine);
    }
}