#include <stdio.h>


int isPositif(int x)
{
    return x > 0;
}

int main()
{
    int a;
    printf("entrer la valeur de nombre a : ");
    scanf("%d", &a);

    if (isPositif(a))
    {
        printf("%d", a * (-1));
    }
    else if (!isPositif(a))
    {
        printf("%d", a * 7);
    }
    else
    {
        printf("1000");
    }

    return 0;
}