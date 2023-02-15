#include <stdio.h>

void myLoop(int n, int step, int index)
{
    for (index = 0; index < n; index = index + step)
    {
        printf("index = %d\n", index);
    }
}
int main()
{

    /**
     * Un programme C qui appelle une fonction (myLoop),
     * la fonction prend en paramètres
     *          - limite maximale d'une boucle (Un nombre entier N)
     *          - le pas que dois faire la boucle (variable step)
     *          - un indexe de parcours de la boucle
     * la fonction affiche chaque élements de la boucle selon le pas donné en paramètres
     */

    int N, step, i;

    printf("Entrer le nombre N : ");
    scanf("%d", &N);

    printf("Entrer le nombre step : ");
    scanf("%d", &step);

    myLoop(N, step, i);



    return 0;
}