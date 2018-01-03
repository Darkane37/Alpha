#include "stdafx.h"
#include "entite.h"

// Implémentation du constructeur d'entité.
entite::entite()
{
	m_vie = 100;
	m_atk = 10;
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
// Amélioration de la fonction estVivant().
bool entite::estVivant()
{
		return m_vie > 0;
}

entite::~entite()
{
}
