#ifndef TABLERO_H_

#define TABLERO_H_

#include "Lista.h"
#include "Celula.h"


class Tablero
{
private:
    Lista<Lista<Celula *> *> * tablero;
    
public:
    Celula * getCasilla  (int x,int y);
    void        setCasilla  (int x,int y,Celula c );

    Tablero(int x,int y);
    virtual ~Tablero();
};



#endif
