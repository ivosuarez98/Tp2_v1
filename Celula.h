/*
 * Celula.h
 *
 *  Created on: 07/10/2022
 *      Author: algo2
 */

#ifndef CELULA_H_
#define CELULA_H_



typedef enum{
	vivo,
	dead
}Estado;

typedef struct{
	unsigned x;
	unsigned y;
}Posicion;

typedef struct{
	unsigned genAlfa;
	unsigned genBeta;
	unsigned genGama;
}Gen;



class Celula {
private:
	Estado 		estado;
	Posicion 	posicion;
	Gen 		gen;
//	celulas * 	vecinos[8]
public:

	Celula();
	virtual ~Celula();
	void setCelula(Celula c);
    void setCelula(Estado e);
    Estado getEstado();

};


#endif  /* SRC_CELULA_H_*/

