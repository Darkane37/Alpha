#include "stdafx.h"
#include "carte.h"

using namespace std;

// Implémentation de la carte
carte::carte() : m_colonne(6), m_ligne(7), m_carte(m_colonne, vector<char>(m_ligne, '_'))
{

}

/*
void carte::afficherCarte() const
{
	for (int i = 0; i < m_colonne; i++)
	{
		cout << '|';
		for (int j = 0; j < m_ligne; j++)
		{
			cout << m_carte1.at(i).at(j);
			cout << '|';
		}
		cout << endl;
	}
}
*/

carte::~carte()
{

}
