#include <exception>
using namespace std;

#ifndef __Nucl�olo_h__
#define __Nucl�olo_h__

// #include "N�cleo.h"

class N�cleo;
class Nucl�olo;

class Nucl�olo
{
	private: ArrayList<int> _ribosomas;
	public: N�cleo* _hasA;

	public: void<int> getRibosomas();

	public: void setRibosomas(ArrayList<int> aRibosomas);
};

#endif
