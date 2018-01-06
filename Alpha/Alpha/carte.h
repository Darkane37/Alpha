#pragma once

#include <vector>
#include <iostream>

class carte
{
public:
	carte();
	~carte();

	//void afficherCarte() const; Pour tester en mode console.

private:

	int m_colonne;
	int m_ligne;

	std::vector<std::vector<char>> m_carte;
};