#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


int main() {
    char nom[20];
    char prenom[20];
    char sexe;
    
    printf("Entrez votre prenom : ");
    scanf_s("%s", prenom,(unsigned)_countof(prenom));
    printf("Entrez votre nom : ");
    scanf_s("%s",nom,(unsigned)_countof(nom));
    for (int i = 0; i < 20; i++) { // Mettre en majuscule la premiere lettre du prenom et du nom
        if (i == 0) {
            prenom[i] = toupper(prenom[i]);
            nom[i] = toupper(nom[i]);
        }
    }
    printf("Renseignez votre sexe : \n");
    do {
        sexe = _getch();
        sexe = toupper(sexe);
    } while ((sexe != 'H') && (sexe != 'F'));

    if (sexe == 'H') {
        printf("Monsieur %s %s", prenom, nom);
    }
    if (sexe == 'F') {
        printf("Madama %s %s", prenom, nom);
    }

}

