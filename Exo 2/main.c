#include <stdio.h>
#include <stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1] = { 0 };
	
	for (int i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i + 1;
		printf("%d /", MyTab1[i]);
	}
	printf("\n\n");
	int* MyPtr1;
	MyPtr1 = &MyTab1[19];
	for (int i = 19; i >= 0; i--) {
		MyTab1[i] = *MyPtr1;
		MyPtr1--;
		printf("%d /", MyTab1[i]);
	}
	printf("\n\n");

	
}