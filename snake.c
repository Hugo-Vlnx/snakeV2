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
	int teteX, teteY;
	int dirX = 0;
	dirY = 1; 
	int longueur = 3;
	int jeuEnCours = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			grille[i][j] = ' ';
		}
	}
	
	initialisation(grille, n,nourriture);
	while (1) {
		afficheGrille(grille, n);
		system("cls"); 
		afficherNourriture (char grille[46][46]);
	sleep (300);
	}
	while (jeuEnCours) {
        
        if (_kbhit()) {
            char touche = _getch();
            switch (touche) {
                case 'z': dirX = -1; dirY = 0; break; 
                case 's': dirX = 1; dirY = 0; break;  
                case 'q': dirX = 0; dirY = -1; break; 
                case 'd': dirX = 0; dirY = 1; break;  
            }
        }

	return 0;
}
