#ifndef MICROONDE_H
#define MICROONDE_H

#include <iostream>

#include "Plat.h"

class MicroOnde
{
	public:
		MicroOnde(int p_puissance);
		~MicroOnde();

		bool mettrePlat(Plat *p_nouveauPlat);

		Plat* enleverPlat();

		bool chaufferPlat(int p_temps);

	private:
		bool detruirePlat();

	private:
		int m_puissance;
		Plat *m_monPlat;
};

#endif
