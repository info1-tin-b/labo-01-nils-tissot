/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h> // Inclus la bibliothèque stdlib poru pouvoir utiliser la fonction "atoi".
#include <string.h> // Inclus la bibliothèque string pour pouvoir utiliser les chaînes.
#include <stdio.h> // Inclus la bibliothèque stdio pour utiliser la fonction printf, pour afficher le résultat.
// Fonction qui caclcule le plus grand commun diviseur de deux entiers a et b.
int gcd(int a, int b) { // Définit la fonction gcd qui prend en paramètre 2 entiers a et b et retourne un entier.
  int r; // déclare une variable 'r' qui est le modulo de la division.
 
    while (b != 0) { //tant que b ne vaut pas zéro
        r = b; // Sauvegarde la valeur de b dans r
        b = b % a; // calcule le modulo de a par b et le stocke dans b.
        a = r; // affecte l'ancienne valeur de b(r) dans a
    
  }
  return a; // Quand b vaut 0, a contient le pgdc et c'est la valuer que l'on retourne.
}

// Fonction principale
int main(int argc, char* argv[]) {
    if (argc <= 2) { // Vérifier qu'on a bien deux arguments 
        return -1; // Sinon, on quitte le programme avec un code d'erreur.
      }

    int a = atoi(argv[1]); // Convertit le premier argument en entier
    int b = atoi(argv[2]); // convertit le deuxième argument en entier

    int result = gcd(a, b);//Appelle la fonction gcd pour calculer le pgcd

    printf("%d\n", result + 5); // affiche le résultat dans le terminal

    return 0; //Retourne 0 pour indiquer que le programme s'est terminé correctement.
}
