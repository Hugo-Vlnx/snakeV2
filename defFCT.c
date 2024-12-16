#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <conio.h>
#include <math.h>
#include <time.h>

void afficheGrille(char grille[46][46], int n) {
	
	
   
    for (int j = 1; j < n; j++) {
        grille[0][j] = '-';
        grille[n - 1][j] = '-';
    }
    for (int i = 1; i < n; i++) {
        grille[i][1] = '!';       
        grille[i][n - 1] = '!';  
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", grille[i][j]);
        }
        printf("\n"); 
    }
	
}
void nourriture(char grille[46][46]) {
    srand(time(NULL));
    int i = (rand() % 43) + 3;
    int j = (rand() % 43) + 3;
    grille[i][j] = '*';
    printf("%c", grille[i][j]);

}
void initialisation(char grille[46][46],int n) {
	
	
	grille[20][10] = 'O';
	grille[20][11] = 'O';
	grille[20][12] = 'O';
    afficheGrille(grille, n);
    nourriture(grille);
	
}

