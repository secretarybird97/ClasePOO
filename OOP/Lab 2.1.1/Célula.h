
#ifndef __Célula_h__
#define __Célula_h__

// #include "Núcleo.h"
// #include "CitoPlasma.h"
// #include "Membrana_Plastica.h"

class Núcleo;
class CitoPlasma;
class Membrana_Plastica;
class Célula;

class Célula
{
	private: String _name;
	public: Núcleo* _núcleo;
	public: CitoPlasma* _hasA;
	public: Membrana_Plastica* _unnamed_Membrana_Plastica_;

	public: String getName();

	public: void setName(String aName);
};

#endif
