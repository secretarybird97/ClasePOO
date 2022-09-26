
#include "Célula.h"
#include "Núcleo.h"
#include "CitoPlasma.h"
#include "Membrana_Plastica.h"

String Célula::getName() {
	return this->_name;
}

void Célula::setName(String aName) {
	this->_name = aName;
}

