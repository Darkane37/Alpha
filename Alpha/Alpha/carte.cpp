#include "stdafx.h"
#include "carte.h"
#include <vector>

using namespace std;

// Implémentation de la carte
carte::carte() : m_tailleX(5), m_tailleY(5)
{
	m_carte[m_tailleX][m_tailleY];
}

void carte::initialiserCarte()
{
	int i(0), j(0);

	for (int i = 0; i < m_tailleX; i++)
	{
		for (j = 0; j < m_tailleY; j++)
		{
			m_carte[i][j] = '_'; // Erreur de violation de mémoire.
		}
	}
}


carte::~carte()
{

}
