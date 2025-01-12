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

    teteX = 20; // a utilisé pour facilité le deplacement -hugo
    teteY = 10;
	grille[teteX][teteY] = 'O';
	grille[20][11] = '¤';
	grille[20][12] = '¤';
    nourriture(grille);
    afficheGrille(grille, n);
    
	
}
int deplacementSnake(char grille[46][46], int n, int teteX, int teteY, int dirX, int dirY, int longueur) {
    int newX = teteX + dirX;
    int newY = teteY + dirY;

    if (grille[newX][newY] == '#') {
        return 0;        		// si le serpent touche la grille sa arrete le jeu -martin

    if (grille[newX][newY] == '*') {
        (longueur)++;
        nourriture(grille);
    }

    grille[newX][newY] = 'O';
    grille[teteX][teteY] = '¤';

    teteX = newX;
    teteY = newY;		// si le serpent ne touche rien grandit le serpent et la tete grandit 

    return 1; 
	    
}

 int deplacerSnake(char grille[46][46], int n, int teteX, int teteY, int longueur) {
     if (_kbhit()) { 
         switch (_getch()) {
         case 'w':
             teteX;
         case 'd': 
             dir = 1;
         case 's':
             dir = 2; 
         case 'a': 
             dir = 3;

    }

int verificationManger(char grille[46][46], int n, int teteX, int teteY, int longueur) {
    if (grille[teteX][teteY] == '*') {
        longueur++;
        grille[teteX][teteY] = 'O'; // il va falloir faire en sorte que on place la pomme apres avoir placé le serpent -hugo
        return longueur;
    }
    else {
        return longueur;
    }
}

int verificationCollision(char grille[46][46], int n, int teteX, int teteY, int longueur) {
    if (grille[teteX][teteY] != '*' && grille[teteX][teteY] != ' ' && grille[teteX][teteY] != 'O') { // pareil trouver un moyen de placer terrain a chque fois apres le serpent est bougé -hugo
        return 1;
    }
    else {
        return 0;
    }

}

