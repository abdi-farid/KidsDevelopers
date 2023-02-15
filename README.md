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

---

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

---

- 2_ADD.c

un programme C qui demande à l'utilisateur d'entrer deux nombres entiers et affiche en sortie leur somme 

```
#include <stdio.h>

int main()
{
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
```

Processus de développement de ce programme :
>- Déclaration de deux variables de type entier ***(int)*** [réservation de deux cases mémoire] pour stocker les deux entiers entrés par l'unité d'entrée standard ***clavier***
>- Déclaration d'une variable ***(réservation de case mémoire)*** où sera stocké le résultat de l'opération mathématique
>- Entrée des valeurs des opérandes à partir de clavier ***(Lecture des entrées)***
>- Réalisation de l'opération mathématique ; sommer les valeurs entrées, et mettre le résultat dans la variable du résultat 
>- Affichage du résultat 

Explication du code :
>> - **int a;**
>> -  **int b;**
>> -  **int resultat;**
>
> ***Réservation de cases mémoires*** ; aussi appelé Déclaration des variables 
>> - **printf("Entrer le nombre a : ");**
> 
>***Affichage*** d'un message à l'utilisateur demandant d'entrer la valeur de la variable **a** à partir du clavier 
>> - **scanf("%d", &a);**
> 
>***Lecture*** de la valeur de la variable **a** entrée par le clavier, et la ***mettre dans la case mémoire*** appropriée
>
>> - **printf("Entrer le nombre b : ");**
> 
>***Affichage*** d'un message à l'utilisateur demandant d'entrer la valeur de la variable **b** à partir du clavier 
>> - **scanf("%d", &b);**
> 
>***Lecture*** de la valeur de la variable **b** entrée par le clavier, et la ***mettre dans la case mémoire*** appropriée
>>- **resultat = a + b;**
>
>Sommer la valeur de la ***variable a*** et la valeur de la ***variable b*** et **affecter** le résultat à la variable ***resultat***
>> - **printf("%d + %d = %d", a, b, resultat);**
>
>***Afficher*** le résultat sur l'invite de commande

---
- **3_SUB.c** 
- **4_MUL.c** 
> Les programmes ***3_SUB.c*** et ***4_MUL.c*** effectuent les opérations de soustraction et de multiplication respectivement. Avec le même principe que le premier programme d'addition expliqué en détail marchent les programmes des opérations mathématiques

---
- **5_Fonction.c** 

Une fonction est un programme C (un bout de code), qui a les caractéristiques suivantes: 
>- Un nom 
>- Un type de retour 
>- Des paramètres (Non pas obligatoires)

Voici la structure d'une fonction en langage C : 
```
typeRetour nom_fonction(type1 param1, type2 param2, ...){
  // Traitement ...

  return valeur [de type typeRetour];
}
```

Voici un exemple réel de fonction d'addition de deux nombres et retourne le résultat de l'opération 


```
int add(int value1, int value2){
  return value1 + value2;
}
```
>Cette fonction ***add*** prend en entrée deux variables et retourne en sortie la somme de ces deux variables 

