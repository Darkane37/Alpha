#include "stdafx.h"
#include "entite.h"

// Implémentation du constructeur d'entité.
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

// Fonction permettant de vérifier que la cible est toujours vivante.
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
