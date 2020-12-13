#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main() {
    srand(time(NULL)); // nous permet de générer des nombres aleatoires
    int tab[100];
    int tab1[100]; // Tableau qui va memoriser la position de la valeur
    int i = 0;
    int valeur;
    int cpt = 0;
    int* Curseur = &tab[0];
    
   printf("Entrez la valeur recherchee : ");
   scanf_s("%d", &valeur);
   /*=== Remplissage de tableau avec valeur aleatoire ===*/
    while (i < 100)
    {
        tab[i] = rand() % (20 + 1 - 1);                            
        printf("Position %d : %d\n", i, tab[i]);
        i++;    
    }
    printf("\n\n");

    /*=== Memorisation de la position de la valeur ===*/
    for (int k = 0; k < 100; k++) {
        *(Curseur + k) = tab[k]; // On copie les valeurs de tab[k] dans *(Curseur + k)
        if (*(Curseur + k) == valeur) {
            tab1[cpt] = k;
            cpt++;
        }
    }
    if (cpt == 0) {
        printf("La valeur %d n'a pas ete trouve.\n", valeur);
    }
    else {
        printf("La valeur %d a ete trouvee en %d", valeur, tab1[0]);
        for (int k = 1; k < cpt; k++) {
            printf(" puis en %d", tab1[k]);
        }
        printf(".\n");
    }
    
}