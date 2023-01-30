# KidsDevelopers
## C programming for kids (Laaziv Group Kids Developers)

Cette repository est faite pour les enfants de l'atelier de programmation ITEL Laaziv

La repository contient les programmes réalisés au cours des séances d'apprentissage au niveau de la maison des jeunes, commençant du niveau basique jusqu'au niveau intermédiaire dans la programmation en langage C

Dans ce qui suit, on va expliquer pas par pas chaque programme afin d'en profiter pour tout rappel ou révision 

Le langage C est un langage de programmation du paradigme impératif, procédural et structuré.

Il est ***compilé*** : c'est à dire qu'au moment de **l'exécution** d'un programme C, on n'a pas besoin du ***code source***, mais on a besoin du code ***compilé***.

Afin de comprendre la compilation, on peut s'aider de l'exemple suivant :

On a deux personnes

une ***personne A*** qui vient de la chine et parle chinois, et une ***personne B*** qui vient des états unis et parle anglais.
quand la ***personne A*** parle en chinois à la ***personne B***, la ***personne B*** ne comprend rien de ce que la ***personne A*** raconte ; quand la ***personne B*** parle anglais à la personne A, la ***personne A*** ne comprend rien de ce raconte la ***personne B***.

Pour que les deux personnes se comprennent, elles doivent trouver une ***personne C*** qui parle anglais et chinois au même temps.

Quand la ***personne A*** parle chinois, la ***personne C*** traduit le chinois en anglais pour la ***personne B***, et vice-versa.



La liste des programmes chargés dans la repository
- 1_Hello.c

Un programme C qui affiche une phrase sur l'invite de commande (terminal)

```
#include <stdio.h>

int main() {

  printf("Hello World\n");

  // ceci est un commentaire sur une ligne 

  /*
  ceci est 
  commentaire sur plusieurs lignes 
  */

  return 0;
}
```
- **#include <stdio.h>**

>Le mot ***#include*** permet d'inclure une bibliothèque C qui contient qui fonctions qu'on peut utiliser dans notre programme

>Le mot ***<stdio.h>*** est la bibliothèque standard du langage C, elle contient plusieurs fonctions telle que :
>>**printf**, **scanf**, ...

- **int main()**

>Chaque programme informatique doit avoir un point (une fonction) de démarrage, ***main()*** est la fonction principale par laquelle un programme C commence son exécution

- **printf("Hello World\n");**
>La fonction ***printf*** prend en entrée une chaine de caractères, et l'affiche sur la sortie standard de systèmes (écran)

- **// ceci est un commentaire sur une ligne**
>Un commentaire est un texte qui n'est pas pris en charge par un compilateur, il sert à documenter le code

- **/\* \*/**
> Pour écrire un commentaire sur plusieurs lignes, on utilise cette notation

- **return 0;**
>Puisque la fonction main comment par ***int***, ce qui signifie que son type de retour est un entier, on retourne un entier à la fin de la fonction principale (programme)