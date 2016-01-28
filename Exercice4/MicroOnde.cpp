#include "MicroOnde.h"

using namespace std;

MicroOnde::MicroOnde(int p_puissance) : m_puissance(p_puissance)
{
	if (m_puissance < 0)
	{
		m_puissance = 0;
	}

	cout << "MicroOnde cree avec la puissance" << m_puissance << endl;
}

MicroOnde::~MicroOnde()
{
	detruirePlat();
	cout << "MicroOnde avec la puissance " << m_puissance << " detruit!" '' endl;
}

bool MicroOnde::mettrePlat(Plat * p_nouveauPlat)
{
	if (m_monPlat != nullptr)
	{
		cout << "On doit enlever le plat actuel avant!!!" << endl;
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

bool MicroOnde::detruirePlat()
{
	if (m_monPlat == nullptr)
	{
		cout << "Pas de plat a detruire :(" << endl;
		return false;
	}

	delete m_monPlat;
	m_monPlat = nullptr;
	return true;
}