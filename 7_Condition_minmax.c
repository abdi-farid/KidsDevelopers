#include <stdio.h>

/**
 * le max entre deux nombres entré au clavier
 */
int main()
{

    int a, b;

    printf("entrer la valeur de nombre a : ");
    scanf("%d", &a);

    printf("entrer la valeur de nombre b : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }

    return 0;
}