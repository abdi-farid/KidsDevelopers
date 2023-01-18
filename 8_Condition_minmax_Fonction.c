#include <stdio.h>


/**
 * fonction qui prend en entrée deux paramètres 
 * retourne le max 
*/
int max(int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}

int main()
{

  int a, b;

  printf("entrer la valeur de nombre a : ");
  scanf("%d", &a);

  printf("entrer la valeur de nombre b : ");
  scanf("%d", &b);

  // définir le max en utilisant la fonction max
  printf("le max  : %d", max(a,b));

  return 0;
}