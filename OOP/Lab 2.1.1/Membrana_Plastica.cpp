
#include "Membrana_Plastica.h"
#include "Célula.h"
#include "Proteinas.h"
#include "Colesterol.h"
#include "Fosfolípidos.h"

float Membrana_Plastica::getColesterolPercent() {
	return this->_colesterolPercent;
}

void Membrana_Plastica::setColesterolPercent(float aColesterolPercent) {
	this->_colesterolPercent = aColesterolPercent;
}

float Membrana_Plastica::getLipidosPercent() {
	return this->_lipidosPercent;
}

void Membrana_Plastica::setLipidosPercent(float aLipidosPercent) {
	this->_lipidosPercent = aLipidosPercent;
}

float Membrana_Plastica::getProteinasPercent() {
	return this->_proteinasPercent;
}

void Membrana_Plastica::setProteinasPercent(float aProteinasPercent) {
	this->_proteinasPercent = aProteinasPercent;
}

