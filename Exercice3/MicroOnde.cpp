#include "MicroOnde.h"

using namespace std;

bool MicroOnde::mettrePlat(Plat * p_nouveauPlat)
{
	if (m_monPlat != nullptr)
	{
		cout << "On doit enlever le plat actuel avant!!!" << end;
		return false;
	}
	m_monPlat = p_nouveauPlat;
	return true;
}

Plat * MicroOnde::enleverPlat()
{
	if (m_monPlat == nullptr)
	{
		cout << "Pas de plat!!!" << endl;
		return nullptr;
	}

	Plat* temp = m_monPlat;
	m_monPlat = nullptr;

	return temp;
}

bool MicroOnde::chaufferPlat(int p_temps)
{
	if (m_monPlat == nullptr)
	{
		cout << "Mettre un plat!!!" << endl;
		return false;
	}

	return m_monPlat->chauffer(p_temps, m_puissance);
}
