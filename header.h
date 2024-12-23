#ifndef HEADER_H
#define HEADER_H



void afficheGrille(char grille[46][46],int n );
void initialisation(char grille[46][46], int n, int teteX, int teteY);
void nourriture(char grille[46][46]);

int verificationManger(char grille[46][46], int n, int teteX, int teteY, int longueur);
int verificationCollision(char grille[46][46], int n, int teteX, int teteY, int longueur);

#endif 

