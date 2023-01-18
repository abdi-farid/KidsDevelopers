#include <stdio.h>

/**
 * structure conditionnelle simple
 * comparer entre deux nombre 
 */
int main()
{

    float a, b;

    printf("entrer la valeur de nombre a : ");
    scanf("%f", &a);

    printf("entrer la valeur de nombre b : ");
    scanf("%f", &b);

    if (a > b)
    {
        printf("%f est supérieure à %f \n", a, b);
        printf("%f > %f ", a, b);
    }

    if (b > a)
    {
        printf("%f est superieure a %f \n", b, a);
        printf("%f > %f ", b, a);
    }

    return 0;
}