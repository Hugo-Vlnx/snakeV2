#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <conio.h>
#include <math.h>
#include <time.h>
#include <Windows.h>



int main() {
	srand(time(NULL));
	char grille[46][46];

	int n = 46;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			grille[i][j] = ' ';
		}
	}
	
	initialisation(grille, n);
	//while (1) {
	//	afficheGrille(grille, n);
	//	system("cls"); 
	//	// mettre un sleep 
	//}

	return 0;
}