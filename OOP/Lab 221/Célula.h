
#ifndef __C�lula_h__
#define __C�lula_h__

// #include "N�cleo.h"
// #include "CitoPlasma.h"
// #include "Membrana_Plastica.h"

class N�cleo;
class CitoPlasma;
class Membrana_Plastica;
class C�lula;

class C�lula
{
	private: String _name;
	public: N�cleo* _n�cleo;
	public: CitoPlasma* _hasA;
	public: Membrana_Plastica* _unnamed_Membrana_Plastica_;

	public: String getName();

	public: void setName(String aName);
};

#endif
