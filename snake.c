#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <conio.h>
#include <math.h>
#include <time.h>



int main() {
	char grille[46][46];

	int n = 46;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			grille[i][j] = ' ';
		}
	}
	initialisation(grille, n);
	return 0;

}