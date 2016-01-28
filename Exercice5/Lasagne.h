#ifndef LASAGNE_H
#define LASAGNE_H

#include "Plat.h"

class Lasagne : public Plat
{
	public:
		Lasagne(int p_temperature, int p_constanteChauffage);

		std::string nom() const;

		bool faitMaison() const;

	private:
		bool m_faitMaison;
};

#endif