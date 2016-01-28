#ifndef PLAT_H
#define PLAT_H

#include <string>
#include <iostream>

class Plat
{
	public:
		int temperature()
		{
			return m_temperature;
		}

		bool chauffer(float p_temps, int p_puissance);

		std::string nom() const;

	private:
		int m_temperature;
		int const m_constanteChauffage;
		std::string m_nom;
};

#endif