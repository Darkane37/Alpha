#pragma once

class entite
{
public:
	entite();
	~entite();

	void recevoirDegats(int nombreDegats);
	void attaquer(entite &cible);
	bool estVivant();

private:

	int m_vie;
	int m_atk;
};
