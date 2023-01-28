#include <stdio.h>

/***
 * typeRetour nomFonction(type1 param1, type2 param2, ...){
 *          traitement ....
 *  return value
 * }
 */



/**
 * définition d'une fonction nommée add
 * prend en entrée 2 paramètres 
 * retourne en sortie la somme des deux nombres 
*/
int add(int value1, int value2)
{
    return value1 + value2;
}

int sub(int value1, int value2)
{
    return value1 - value2;
}

int mul(int value1, int value2)
{
    return value1 * value2;
}

int div(int value1, int value2)
{
    return value1 / value2;
}



int main()
{

    int a;
    int b;
    int resultat;

    printf("Entrer le nombre a : ");
    scanf("%d", &a);

    printf("Entrer le nombre b : ");
    scanf("%d", &b);



    printf("%d + %d = %d \n", a, b, add(a, b));
    printf("%d / %d = %d \n", a, b, div(a, b));
    printf("%d - %d = %d \n", a, b, sub(a, b));
    printf("%d * %d = %d \n", a, b, mul(a, b));

    return 0;
} 