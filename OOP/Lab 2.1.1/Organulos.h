
#ifndef __Organulos_h__
#define __Organulos_h__

// #include "CitoPlasma.h"

class CitoPlasma;
class Organulos;

class Organulos
{
	private: int _lisosomas;
	private: int _plastidos;
	public: CitoPlasma* _partOf;

	public: int getLisosomas();

	public: void setLisosomas(int aLisosomas);

	public: int getPlastidos();

	public: void setPlastidos(int aPlastidos);
};

#endif
