
#ifndef __Célula_eucariota_h__
#define __Célula_eucariota_h__

#include "Célula.h"

// class Célula;
class Célula_eucariota;

class Célula_eucariota: public Célula
{
	private: ArrayList _arn;

	public: ArrayList getArn();

	public: void setArn(ArrayList aArn);
};

#endif
