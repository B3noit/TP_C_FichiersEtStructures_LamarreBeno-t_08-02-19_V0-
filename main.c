#include <stdio.h>
#include <stdlib.h>

#include "fichier.h"

int main()
{
//VAR
tClient tCarte;
int nChoix=1;
int nNbClient=0;


while (nChoix!=0)
{
printf("Taper 1 pour entrer un client.\nTaper 2 pour lire le répertoire de client.\nTaper 0 pour quitter.\n");
scanf("%d",&nChoix);

    switch (nChoix)
    {
        case 1 :
            nNbClient=comptCli();
            saisirClient(&tCarte);
            ecrirFichier(tCarte,nNbClient);
            break;

        case 2 : lirFichier();
        break;
    }
}
    printf("Bye bye world!\n");
    return 0;
}
