#pragma once

class carte
{
public:
	carte();
	~carte();

	void initialiserCarte();

private:

	int m_tailleX;
	int m_tailleY;

	char **m_carte;
};