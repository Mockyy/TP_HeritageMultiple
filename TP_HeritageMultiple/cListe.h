#pragma once

struct element
{
	element *suivant;
	void *contenu;
};

class cListe
{
protected:

	element *debut;
	element *courant;

public:

	cListe();
	~cListe();
	void ajouter(void*);
	void* premier();
	void* prochain();
	int fini();
};

