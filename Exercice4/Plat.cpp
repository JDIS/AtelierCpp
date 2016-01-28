#include "Plat.h"

using namespace std;

Plat::Plat(std::string p_nom, int p_temperature, int p_constanteChauffage) : m_nom(p_nom), m_temperature(p_temperature), m_constanteChauffage(p_constanteChauffage)
{
	cout << "Le plat: " << m_nom << "a ete cree" << endl;
}

Plat::~Plat()
{
	cout << "Le plat: " << m_nom << "a ete detruit" << endl;
}

bool Plat::chauffer(float p_temps, int p_puissance)
{
	if (p_temps < 0 || p_temps > 100)
		return false;

	m_temperature += m_constanteChauffage * p_puissance * p_temps;

	if (m_temperature > 100)
	{
		m_temperature = 100;
		cout << "Le plat: " << m_nom << "a explose!!!!" << endl;
		return false;
	}
	return true;
}

std::string Plat::nom() const
{
	return m_nom;
}
