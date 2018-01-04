#pragma once

class entite
{
public:
	entite();
	~entite();

	void attaquer(entite &cible);

	int getVie();
	void setVie(int nouvelleVie);

	bool estVivant();

protected:

	int m_vie;
	int m_atk;
};

