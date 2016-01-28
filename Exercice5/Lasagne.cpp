#include "Lasagne.h"

Lasagne::Lasagne(int p_temperature, int p_constanteChauffage, bool p_faitMaison) : Plat("Lasagne", p_temperature, p_constanteChauffage), m_faitMaison(p_faitMaison)
{
}

std::string Lasagne::nom() const
{
	return Plat::nom() + " de maman!";
}

bool Lasagne::faitMaison() const
{
	return m_faitMaison;
}
