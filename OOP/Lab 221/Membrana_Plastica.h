
#ifndef __Membrana_Plastica_h__
#define __Membrana_Plastica_h__

// #include "Célula.h"
// #include "Proteinas.h"
// #include "Colesterol.h"
// #include "Fosfolípidos.h"

class Célula;
class Proteinas;
class Colesterol;
class Fosfolípidos;
class Membrana_Plastica;

class Membrana_Plastica
{
	private: float _colesterolPercent;
	private: float _lipidosPercent;
	private: float _proteinasPercent;
	public: Célula* _unnamed_Célula_;
	public: Proteinas* _unnamed_Proteinas_;
	public: Colesterol* _unnamed_Colesterol_;
	public: Fosfolípidos* _unnamed_Fosfolípidos_;

	public: float getColesterolPercent();

	public: void setColesterolPercent(float aColesterolPercent);

	public: float getLipidosPercent();

	public: void setLipidosPercent(float aLipidosPercent);

	public: float getProteinasPercent();

	public: void setProteinasPercent(float aProteinasPercent);
};

#endif
