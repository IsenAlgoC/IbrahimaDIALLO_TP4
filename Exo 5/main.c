#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main() {
	char buffer[1025];
	int cpt = 0;
	int cpt1 = 0;
	int nombre_mots = 1;
	float longueur_moyenne_mot = 0;
	printf("Entrez votre phrase : ");
	gets_s(buffer, 1024);
	for (int i = 0; i < strlen(buffer); i++) {
		if (buffer[i] == ' ') {
			cpt++;
		}
		else {
			cpt1++;
		}
	}
	nombre_mots += cpt;
	longueur_moyenne_mot = (float)cpt1 / nombre_mots;
	printf("Le nombre de mots est de  : %d\n", nombre_mots);
	printf("La longueur moyenne des mots est de : %f", longueur_moyenne_mot); 
}