#ifndef TARTE_H
#define TARTE_H

#include "Plat.h"

enum TypeTarte { Viande, Pomme, Vege};

class Tarte : public Plat
{
	public:
		Tarte(int p_temperature, int p_constanteChauffage, TypeTarte p_type);
	
		virtual std::string nom() const;

		TypeTarte type() const;

	private:
		TypeTarte m_type;
};

#endif
