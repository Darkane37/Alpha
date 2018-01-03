#include "stdafx.h"
#include "entite.h"

entite::entite()
{
}

void entite::recevoirDegats(int nombreDegats)
{
	m_vie -= nombreDegats;

	if (m_vie < 0)
	{
		m_vie = 0; // Evite que la vie tombe en négatif.
	}
}

void entite::attaquer(entite &cible)
{
	//cible.recevoirDegats(cible.getAtk());
}

// Fonction permettant de vérifier que la cible est toujours vivante.
bool entite::estVivant() {

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
