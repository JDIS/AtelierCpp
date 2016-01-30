#include "Plat.h"

using namespace std;

bool Plat::chauffer(float p_temps, int p_puissance)
{
	if (p_temps < 0)
		return false;

	m_temperature += m_constanteChauffage * p_puissance * p_temps;

	if (m_temperature > 100)
	{
		m_temperature = 100;
		cout << "Le plat: " << m_nom << " a explose!!!!" << endl;
		return false;
	}
	
	cout << "La temperature de " << m_nom << " est de " << m_temperature << endl;
	
	return true;
}

std::string Plat::nom() const
{
	return m_nom;
}
