#include <stdio.h>

int main()
{

    /***
     * addition de deux nombres entiers entrés en clavier
     * en utilisant 3 variable
     */

    int a;
    int b;
    int resultat;

    printf("Entrer le nombre a : ");
    scanf("%d", &a);

    printf("Entrer le nombre b : ");
    scanf("%d", &b);

    resultat = a + b;

    printf("%d + %d = %d", a, b, resultat);

    return 0;
}