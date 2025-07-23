                                          "Projet _Printf par Luidgi Watson && Lapique Philippe"

# Voici notre projet de groupe pour Holberton School, afin de coder une copies de la fonction "Printf" de la bibliothèque <stdio.> en langage C.

# Les Objectif attendues : 
  1. Couvrir les caractères avec '%c'.
  2. Couvrir les strings avec '%s'.
  3. Couvrir les entiers ( décimal signé) avec '%d', '%i'.
  4. Couvrir les pourcentage.

# Organisation du travail pour le projet : 

Temps estimer du projet : ( 35 heures ) 
Condition de travail full présentielle au campus de Bordeaux, avec une division du travail à parts égale :

. M.Lapique s'occuper de la tâche 0 qui gère les strings et les caractère. 
. M.Watson s'occuper de la tache 1 qui gère les entiers et les décimales.

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

<img width="458" height="502" alt="Main h" src="https://github.com/user-attachments/assets/c447bf2e-1d45-43f7-9492-f03050658d0b" />



