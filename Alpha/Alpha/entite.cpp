#include "stdafx.h"
#include "entite.h"

// Impl�mentation du constructeur d'entit�.
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
		m_vie = 0; // Evite que la vie tombe en n�gatif.
	}
}

void entite::attaquer(entite &cible)
{
	//cible.recevoirDegats(cible.getAtk());
}

// Fonction permettant de v�rifier que la cible est toujours vivante.
// Am�lioration de la fonction estVivant().
bool entite::estVivant()
{
		return m_vie > 0;
}

entite::~entite()
{
}
