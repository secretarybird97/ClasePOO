
#ifndef __Núcleo_h__
#define __Núcleo_h__

// #include "Nucléolo.h"

class Nucléolo;
class Núcleo;

class Núcleo
{
	private: ArrayList _adn;
	public: Nucléolo* _hasA;

	public: ArrayList getAdn();

	public: void setAdn(ArrayList aAdn);
};

#endif
