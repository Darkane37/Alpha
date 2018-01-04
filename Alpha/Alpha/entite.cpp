#include "stdafx.h"
#include "entite.h"

// Impl�mentation du constructeur d'entit�.
entite::entite()
{
	m_vie = 100;
	m_atk = 10;
}

void entite::attaquer(entite &cible)
{
	int dommage(0);

	dommage = cible.getVie() - m_atk;

	cible.setVie(dommage);
}

int entite::getVie()
{
	return m_vie;
}

void entite::setVie(int nouvelleVie)
{
	m_vie = nouvelleVie;
}

// Fonction permettant de v�rifier que la cible est toujours vivante.
bool entite::estVivant()
{
	if (m_vie > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

entite::~entite()
{
}
