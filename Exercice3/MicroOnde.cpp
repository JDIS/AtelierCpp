#include "MicroOnde.h"

using namespace std;

bool MicroOnde::mettrePlat(Plat* p_nouveauPlat)
{
	if (m_monPlat != NULL)
	{
		cout << "On doit enlever le plat actuel avant!!!" << endl;
		return false;
	}
	m_monPlat = p_nouveauPlat;
	return true;
}

Plat* MicroOnde::enleverPlat()
{
	if (m_monPlat == NULL)
	{
		cout << "Pas de plat!!!" << endl;
		return NULL;
	}

	Plat* temp = m_monPlat;
	m_monPlat = NULL;

	return temp;
}

bool MicroOnde::chaufferPlat(int p_temps)
{
	if (m_monPlat == NULL)
	{
		cout << "Mettre un plat!!!" << endl;
		return false;
	}

	return m_monPlat->chauffer(p_temps, m_puissance);
}

bool MicroOnde::detruirePlat()
{
	if(m_monPlat == NULL)
	{
		cout << "Pas de plat a detruire :(" << endl;
		return false;
	}
	
	delete m_monPlat;
	m_monPlat = NULL;
	return true;
}
