
#ifndef __Membrana_Plastica_h__
#define __Membrana_Plastica_h__

// #include "C�lula.h"
// #include "Proteinas.h"
// #include "Colesterol.h"
// #include "Fosfol�pidos.h"

class C�lula;
class Proteinas;
class Colesterol;
class Fosfol�pidos;
class Membrana_Plastica;

class Membrana_Plastica
{
	private: float _colesterolPercent;
	private: float _lipidosPercent;
	private: float _proteinasPercent;
	public: C�lula* _unnamed_C�lula_;
	public: Proteinas* _unnamed_Proteinas_;
	public: Colesterol* _unnamed_Colesterol_;
	public: Fosfol�pidos* _unnamed_Fosfol�pidos_;

	public: float getColesterolPercent();

	public: void setColesterolPercent(float aColesterolPercent);

	public: float getLipidosPercent();

	public: void setLipidosPercent(float aLipidosPercent);

	public: float getProteinasPercent();

	public: void setProteinasPercent(float aProteinasPercent);
};

#endif
