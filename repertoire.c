#include "repertoire.h"

int Acquisition(){
    Personne p;
    p.i = 0;

    printf("--------------------------------------------------\n");
    printf("                   Acquisition                    \n");
    printf("--------------------------------------------------\n");

    printf("Entrez votre nom Svp ! : ");
    scanf("%s", p.nom);
    printf("\nEntrez votre nom Svp ! : ");
    scanf("%s", p.numero);

    if ((strlen(p.nom) <= 0 && strlen(p.nom) > 30) && (strlen(p.numero) <= 0 && strlen(p.numero) > 14)){
        return 0;
    }else{
        if(p.numero[0] == '0' && (p.numero[1] == '8' || p.numero[1] == '9')){
            annuaire[p.i++] = p;
            printf("%p", annuaire);
		    return 1;
        }else{
            return 0;
        }
    }
}