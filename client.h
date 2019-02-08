#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include <stdio.h>

//CONST
#define TAILLECHAINE 30

typedef struct tClient
{
    char cId [TAILLECHAINE];
    char cNom [TAILLECHAINE];
    char cPrenom [TAILLECHAINE];
    char cPostal [TAILLECHAINE];
    char cVille [TAILLECHAINE];
}tClient;

extern void saisirClient(tClient *carte);



#endif // CLIENT_H_INCLUDED
