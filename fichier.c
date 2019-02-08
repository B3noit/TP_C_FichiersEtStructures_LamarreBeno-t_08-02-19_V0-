#include "fichier.h"


 //////PROCEDURE ecrirFichier/////////////////////////////////////////////////////////////////////////////////////////////////
 // Description :Cette procédure permet d'écrire le profil tout juste renseigné d'un client dans le fichier text.
 //
 // Entrée : Le profil d'un client.
 //
 // Sortie : Un nouveau profile dans le fichier text.
 //
 // Note :
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ecrirFichier(const tClient carte,const int nNbClient)
{
//VAR
FILE *fp=NULL;

    if ((fp=fopen("index_clients.txt","a"))==NULL)
    {
        perror("Erreur de creation de fichier");
    }
    else
    {
        fprintf(fp,"Client numero : %d \n %s \n %s \n %s \n %s \n %s \n\n",nNbClient,carte.cId,carte.cNom,carte.cPrenom,carte.cPostal,carte.cVille);
    }
    fclose(fp);
}


 //////PROCEDURE lirFichier/////////////////////////////////////////////////////////////////////////////////////////////////
 // Description :Cette procédure permet d'afficher les profils des clients dans la console.
 //
 // Entrée : Le fichier text.
 //
 // Sortie : L'affichage des profils sur la console.
 //
 // Note :
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void lirFichier()
{
//VAR
FILE *fp=NULL;
char buff[255];

    if ((fp=fopen("index_clients.txt","r"))==NULL)
    {
        perror("Erreur de creation de fichier");
    }
    else
    {
        while((fgets(buff,255,fp))!=NULL)
        {
            printf("%s",buff);
        }
    }
    fclose(fp);
}



 //////FONCTION comptCli/////////////////////////////////////////////////////////////////////////////////////////////////
 // Description :Cette fonction renvoie le nombre de profils de clients déjà existants.
 //
 // Entrée : Le fichier text.
 //
 // Sortie : Le nombre de profils de clients déjà existants.
 //
 // Note :
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int comptCli()
{
//VAR
FILE *fp=NULL;
char buff[255];
int nNbTemp=1;

    if ((fp=fopen("index_clients.txt","r"))==NULL)
    {
        perror("Erreur de creation de fichier");
    }
    else
    {
        while(fgets(buff,14,fp)!=NULL)
        {
            if (strcmp(buff,"Client numero")==0)
            {
                    nNbTemp++;
            }
        }
    }
    fclose(fp);
    return nNbTemp;
}
