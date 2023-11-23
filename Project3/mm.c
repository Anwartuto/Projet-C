#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int nombreMystere = rand() % 100 + 1;
    int nombreJoueur;
    int nombreEssais = 0;
    int nombreMaxEssais = 10; // Le joueur a 10 essais pour deviner le nombre

    printf("Bienvenue dans le jeu de devinette !\n");
    printf("Trouvez le nombre mystere entre 1 et 100.\n\n");

    while (nombreEssais < nombreMaxEssais) {
        printf("Essai %d/%d : Entrez votre devinette : ", nombreEssais + 1, nombreMaxEssais);
        scanf("%d", &nombreJoueur);

        nombreEssais++;

        if (nombreJoueur < nombreMystere) {
            printf("Le nombre mystere est plus grand. Essayez encore !\n\n");
        }
        else if (nombreJoueur > nombreMystere) {
            printf("Le nombre mystere est plus petit. Essayez encore !\n\n");
        }
        else {
            printf("\nFélicitations ! Vous avez trouvé le nombre mystere en %d essais.\n", nombreEssais);
            break;
        }
    }

    if (nombreEssais == nombreMaxEssais) {
        printf("\nDésolé, vous avez épuisé tous vos essais. Le nombre mystere était : %d\n", nombreMystere);
    }

    return 0;
}
