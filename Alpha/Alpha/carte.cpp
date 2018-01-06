#include "stdafx.h"
#include "carte.h"


using namespace std;

// Implémentation de la carte
carte::carte() : m_tailleX(6), m_tailleY(5), m_carte(m_tailleX, vector<char>(m_tailleY, '_'))
{

}

/* Fonctionne en mode console.
void carte::afficherCarte() const
{
	for (int i = 0; i < m_tailleY; i++)
	{
		cout << '|';
		for (int j = 0; j < m_tailleX; j++)
		{
			cout << m_carte.at(j).at(i);
			cout << '|';
		}
		cout << endl;
	}
}
*/

carte::~carte()
{

}
