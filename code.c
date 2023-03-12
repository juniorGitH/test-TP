#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    // Initialiser la graine du générateur aléatoire
    srand(time(0));

    // Générer un nombre aléatoire entre 0 et 100
    int nombre_secret = rand() % 101;

    // Boucle pour demander à l'utilisateur de deviner le nombre
    while (1) {
        //printf(" %d ",nombre_secret);//pour le test
        int reponse;
        printf("Devinez le nombre (entre 0 et 100) : ");
        scanf("%d", &reponse);

        // Vérifier si la réponse est correcte et donner des indications
        if (reponse < nombre_secret) {
            printf("plus grand !\n");
        } else if (reponse > nombre_secret) {
            printf("plus petit \n");
        } else {
            printf("Bravo \n");
            break;  // Sortir de la boucle si la réponse est correcte
        }
    }

    return 0;
}
