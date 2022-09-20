#include <exception>
using namespace std;

#ifndef __Nucléolo_h__
#define __Nucléolo_h__

// #include "Núcleo.h"

class Núcleo;
class Nucléolo;

class Nucléolo
{
	private: ArrayList<int> _ribosomas;
	public: Núcleo* _hasA;

	public: void<int> getRibosomas();

	public: void setRibosomas(ArrayList<int> aRibosomas);
};

#endif
