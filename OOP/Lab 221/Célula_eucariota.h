
#ifndef __C�lula_eucariota_h__
#define __C�lula_eucariota_h__

#include "C�lula.h"

// class C�lula;
class C�lula_eucariota;

class C�lula_eucariota: public C�lula
{
	private: ArrayList _arn;

	public: ArrayList getArn();

	public: void setArn(ArrayList aArn);
};

#endif
