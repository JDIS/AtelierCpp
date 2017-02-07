#ifndef PLAT_H
#define PLAT_H

#include <string>
#include <iostream>

class Plat
{
	public:
		Plat(std::string p_nom, int p_temperature, int p_constanteChauffage);
		virtual ~Plat();

		int temperature()
		{
			return m_temperature;
		}

		bool chauffer(float p_temps, int p_puissance);

		virtual std::string nom() const;

	private:
		std::string m_nom;

	protected:
		int m_temperature;
		int const m_constanteChauffage;
};

#endif
