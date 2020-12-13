#include <stdio.h>
#include <stdlib.h>
#include "tp4.h"



int main() {
	HEURE HeureDebut;
	HEURE HeureFin;
	HEURE Duree;
	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 0;
	Duree.minute = 45;
	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute;
	if (HeureFin.minute > 60) {
		int retenue;
		retenue = HeureFin.minute % 60;
		HeureFin.minute = retenue;
		HeureFin.heure++;

	}
	printf("HeureDebut = %d:%d || HeureFin = %d:%d || Duree = %d:%d\n", HeureDebut.heure, HeureDebut.minute, HeureFin.heure, HeureFin.minute, Duree.heure, Duree.minute);

	
}