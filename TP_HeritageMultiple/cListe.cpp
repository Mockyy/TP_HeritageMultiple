#include "cListe.h"
#include <stdlib.h>

cListe::cListe()
{
	debut = NULL;
	courant = debut;
}

cListe::~cListe()
{
}

void cListe::ajouter(void* ajout)
{
	element* newAjout = new element;

	newAjout->suivant = debut;
	newAjout->contenu = ajout;

	debut = newAjout;
}

void * cListe::premier()
{
	courant = debut;
	return courant->contenu;
}

void * cListe::prochain()
{
	courant = courant->suivant;
	return courant->contenu;
}

int cListe::fini()
{
	return 0;
}
