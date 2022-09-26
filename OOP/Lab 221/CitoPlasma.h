#include <vector>
using namespace std;

#ifndef __CitoPlasma_h__
#define __CitoPlasma_h__

// #include "Célula.h"
// #include "Citoesqueleto.h"
#include "Organulos.h"

class Célula;
class Citoesqueleto;
class Organulos;
class CitoPlasma;

class CitoPlasma
{
	public: Célula* _hasA;
	public: Citoesqueleto* _unnamed_Citoesqueleto_;
	public: std::vector<Organulos*> _partOf;
};

#endif
