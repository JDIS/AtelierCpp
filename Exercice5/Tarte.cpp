#include "Tarte.h"

Tarte::Tarte(int p_temperature, int p_constanteChauffage, TypeTarte p_type) : Plat("Tarte", p_temperature, p_constanteChauffage), m_type(p_type)
{
}

std::string Tarte::nom() const
{
	return Plat::nom() + " de Papa!";
}

TypeTarte Tarte::type() const
{
	return m_type;
}
