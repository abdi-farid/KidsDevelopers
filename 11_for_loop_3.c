#include<stdio.h>


int main(){
    /**
     * Un programme C qui demande à l'utilisateur d'entrer un nombre N,
     * puis affiche tous les nombre de 1 jusqu'à N
    */

   int i, N; 

   printf("entrer un nombre N : ");
   scanf("%d", &N);


   for(i=1; i<N+1; i++){
    printf("%d\n", i);
   }
}