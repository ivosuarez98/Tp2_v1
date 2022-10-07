/*
 * Celula.cpp
 *
 *  Created on: 07/10/2022
 *      Author: algo2
 */

#include "Celula.h"

Celula::Celula()
{
	this->estado		=	dead;
	this->posicion.x	=	0;
	this->posicion.y	= 	0;
	this->gen.genAlfa	=	0;
	this->gen.genBeta	=	0;
	this->gen.genGama	=	0;

}

Celula::~Celula() {
	// TODO Auto-generated destructor stub
}


void Celula::setCelula(Celula c)
{
	this->estado		=	c.estado;
	this->posicion.x	=	c.posicion.x;
	this->posicion.y	= 	c.posicion.y;
	this->gen.genAlfa	=	0;
	this->gen.genBeta	=	0;
	this->gen.genGama	=	0;
}
void Celula::setCelula(Estado e)
	{
		this->estado		=	e;
	}
Estado Celula::getEstado()
	{
		return this->estado;
	}
