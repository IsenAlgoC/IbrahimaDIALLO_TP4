#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main() {
	char caractere1[40], caractere2[40];
	printf("Entrez un mot : ");
	gets(caractere1);
	
	strcpy(caractere2, caractere1); // copie le contenue de caractere1 dans caractere2
	
	strrev(caractere2); // renverse le mot contenu dans caractere2. Ainsi le dernier élement se retrouve a l'indice 0 ainsi de suite 
	
	if (strcmp(caractere1, caractere2) == 0) { // compare chaque element de chaque chaine de caractere. Si ils sont tous egaux, il retourne 0.
		printf("%s est un palindrome", caractere1);
	}
	else {
		printf("%s n'est pas un palindrome", caractere1);
	}


}