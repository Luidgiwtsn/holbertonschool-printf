                                          "Projet _Printf par Luidgi Watson && Lapique Philippe"

# Voici notre projet de groupe pour Holberton School, afin de coder une copies de la fonction "Printf" de la bibliothèque <stdio.> en langage C.

# Les Objectif attendues : 
  1. Couvrir les caractères avec '%c'.
  2. Couvrir les strings avec '%s'.
  3. Couvrir les entiers ( décimal signé) avec '%d', '%i'.
  4. Couvrir les pourcentage.

# Les limitation et contraindication de l'exercice :

Pour réaliser cette fonction nous avions le droit d'utiliser :

  . write (man 2 write)
  . malloc (man 3 malloc)
  . free (man 3 free)
  . va_start (man 3 va_start)
  . va_end (man 3 va_end)
  . va_copy (man 3 va_copy)
  . va_arg (man 3 va_arg)

A l'inverse nous ne devions pas :

  . Utiliser les fonctions présentes dans la bibliothèque standars de <stdio.h>
  . Utiliser la condition "if" ou "switch"
  . You don’t have to handle the flag characters
  . You don’t have to handle field width
  . You don’t have to handle precision
  . You don’t have to handle the length modifiers

# Organisation du travail pour le projet : 

Temps estimer du projet : ( 35 heures ) 
Condition de travail full présentielle au campus de Bordeaux, avec une division du travail à parts égale :

.M.Lapique s'occuper de la tâche 0 qui gère les strings et les caractère. 

.M.Watson s'occuper de la tache 1 qui gère les entiers et les décimales.

Un travail sur deux branches à étaient réaliser avec un pull request pour fusionner a la branche principal en fin de projet de plus des check in régulier ont étaient organiser sur le travail du code de chacuns.

# Réflexion sur l'architecture du projet : 

Nous avons pris la décision commune de diviser le commande en plusieurs fichiers afin de se répartir le travail plus facilement et de pouvoir controler individuellement chaque fonction en cas de problème lors de la compilation.

. README.md : Un readme avec l'explication du projet et de sa structure. 
. Tool-char.c : Une fonction pour pouvoir gerer le cas d'un caractère.
. Tool_string.c : Une fonction pour pouvoir gerer le cas d'une string. 
. Tool_int.c : Une fonction pour gerer le cas des entiers qu'ils soit négatif ou positif.
- _printf.c : Notre fonction printf qui appelle les fonction Tool en fonction de la correspondance avec le tableau de structure "atlas"
- main.c : Le fichier qui contient différent cas afin de pouvoir réaliser des test de l'executable _printf.
- main.h : Le fichier Header avec nos prototype de fonction, nos différentres bibliothèques ainsi que notre variables de tableaux de structure.
- man_page_printf : Manuel d'utilisation de la fonction.

<img width="458" height="502" alt="Main h" src="https://github.com/user-attachments/assets/c447bf2e-1d45-43f7-9492-f03050658d0b" />

# Compilation :

Afin de pouvoir compiler le projet vous devez utiliser la commande : 

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf

Attention au standars de compilation de votre visual code ou de votre terminal !

# Exemple d'utilisation de la commande :

<img width="926" height="800" alt="utilisation" src="https://github.com/user-attachments/assets/524b91d5-8b70-4579-bbc9-45cfbe4777e1" />

# Les évolutions possibles dans l'avenir :

La fonction peut encore être largement améliorer afin de couvrir toutes les autres sorties commes : 
  . Les unsigned [%u]
  . Les unsigned octal [%o]
  . Les unsigned hexadecimal [%x, %X]
  . Les pointeur sur adresse [%p]

De plus il manquerais d'ajouter une limite pour la valeur MIN et MAX d'un entier afin d'éviter toutes fuites de mémoire.

Note importante : 

Dans le cas d'une amélioration ne pas oublier d'allouer et de free la mémoire avec les commandes "Malloc" et "Free" ainsi que de tester cela avec le maccros "Valgrind" dans le terminal.

# Man page 

Pour plus de details dans le fonctionnement de la fonction ou pour une erreur lors de son utilisation, vous pouvez vous réferer au man page présent dans le dossier holberton.



