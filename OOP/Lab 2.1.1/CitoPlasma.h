#include <vector>
using namespace std;

#ifndef __CitoPlasma_h__
#define __CitoPlasma_h__

// #include "C�lula.h"
// #include "Citoesqueleto.h"
#include "Organulos.h"

class C�lula;
class Citoesqueleto;
class Organulos;
class CitoPlasma;

class CitoPlasma
{
	public: C�lula* _hasA;
	public: Citoesqueleto* _unnamed_Citoesqueleto_;
	public: std::vector<Organulos*> _partOf;
};

#endif
