#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED

#pragma once
#include <string.h>
#include "client.h"


extern void ecrirFichier(const tClient carte,const int nNbClient);
extern void lirFichier();
extern int comptCli();
#endif // FICHIER_H_INCLUDED
