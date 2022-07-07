/*Projet en C de repertoire telephonoque*/
/*MULAJA ILUNGA HANCE*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Personne{
    char nom[30];
    char numero[10];
}Personne;

Personne annuaire[1000];

 /*prototypes des fonctions*/

void ajout_personne();

void affiche_contact();

void Acquisition();

void ajoute();

void affiche();

void rechercherTel();

void rechercherNom();

void efface();

void pause();

void quitter();