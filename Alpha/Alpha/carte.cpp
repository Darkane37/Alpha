#include "stdafx.h"
#include "carte.h"
#include <vector>

using namespace std;

// Implémentation de la carte
carte::carte() : m_tailleX(5), m_tailleY(5)
{
	m_carte[m_tailleX][m_tailleY];
}

// Pas sûr que ça fonctionne, je sais pas comment la tester.
void carte::initialiserCarte()
{
	int i(0), j(0);

	for (int i = 0; i < m_tailleX; i++)
	{
		for (j = 0; j < m_tailleY; j++)
		{
			m_carte[i][j] = '_';
		}
	}
}


carte::~carte()
{

}
