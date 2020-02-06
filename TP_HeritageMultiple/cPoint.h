#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class cPoint
{
protected:

	int nX, nY;

public: 

	cPoint(int abs = 0, int ord = 0)
	{
		nX = abs;
		nY = ord;
	}

	void affiche()
	{
		std::cout << "Coordonnées : " << " x " << nX << " y " << nY << std::endl;
	}
};

