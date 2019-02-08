


#include "client.h"





 //////PROCEDURE saisirClient/////////////////////////////////////////////////////////////////////////////////////////////////
 // Description :Cette procédure permet de remplir le profil d'un client.
 //
 // Entrée : La structure vide d'un client.
 //
 // Sortie : Le profile d'un client renseigné.
 //
 // Note :
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void saisirClient(tClient *carte)
{
    fflush(stdin);
    printf("Saisir un ID.");
    gets(carte->cId);
    fflush(stdin);
    printf("Saisir un nom.");
    gets(carte->cNom);
    fflush(stdin);
    printf("Saisir un prénom.");
    gets(carte->cPrenom);
    fflush(stdin);
    printf("Saisir un code postal.");
    gets(carte->cPostal);
    fflush(stdin);
    printf("Saisir une ville.");
    gets(carte->cVille);
}
