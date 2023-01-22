#include <stdio.h>
#include <string.h>

char sign(int a)
{
    if (a < 0)
        return '-';
    else if (a == 0)
        return '0';
    else
        return '+';
}

string singget(int a)
{
    if (a < 0)
        return "negatif";
    else if (a == 0)
        return "null";
    else
        return "positif";
}

int main()
{
    int a;
    printf("entrer la valeur de nombre a : ");
    scanf("%d", &a);

    printf("%c", sign(a));
    printf("%s", signget(a));

    return 0;
}