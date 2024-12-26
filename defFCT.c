#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <conio.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void afficheGrille(char grille[46][46], int n) {
	
	
   
    for (int j = 1; j < n; j++) {
        grille[0][j] = '#';
        grille[n - 1][j] = '#';
    }
    for (int i = 1; i < n; i++) {
        grille[i][1] = '#';       
        grille[i][n - 1] = '#';  
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", grille[i][j]);
        }
        printf("\n"); 
    }
	
}
void nourriture(char grille[46][46]) {
    int i;
    int j;
    while (grille[i][j] != ' ') {
        i = (rand() % 44) + 2;
         j = (rand() % 44) + 2;
    }
    grille[i][j] = '*';
    

}
void initialisation(char grille[46][46],int n, int teteX, int teteY) {

    teteX = 20; // a utilis� pour facilit� le deplacement _H
    teteY = 10;
	grille[teteX][teteY] = 'O';
	grille[20][11] = '�';
	grille[20][12] = '�';
    nourriture(grille);
    afficheGrille(grille, n);
    
	
}

int verificationManger(char grille[46][46], int n, int teteX, int teteY, int longueur) {
    if (grille[teteX][teteY] == '*') {
        longueur++;
        grille[teteX][teteY] = 'O'; // il va falloir faire en sorte que on place la pomme apres avoir plac� le serpent _H
        return longueur;
    }
    else {
        return longueur;
    }
}

int verificationCollision(char grille[46][46], int n, int teteX, int teteY, int longueur) {
    if (grille[teteX][teteY] != '*' && grille[teteX][teteY] != ' ' && grille[teteX][teteY] != 'O') { // pareil trouver un moyen de placer terrain a chque fois apres le serpent est boug�
        return 1;
    }
    else {
        return 0;
    }

}

