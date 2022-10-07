#include "Tablero.h"

Tablero::Tablero(int x, int y)
{
    this->tablero = new Lista<Lista<Celula *> *>();
    for (int i = 0; i < x; i++)
    {
        Lista<Celula *> * columna =new Lista <Celula *>();  // columna es una lista de punteros a casilleros

        for (int j = 0; j < y; j++)
        {
        	Celula * fila = new Celula ();                  // fila esin puntero a casillero
            columna->add(fila);
        }
        this->tablero->add(columna);    
    }
}

Tablero::~Tablero()
{
}


Celula * Tablero::getCasilla(int x, int y)
{
    return this->tablero->get(x)->get(y);
}

void Tablero::setCasilla(int x, int y,Celula c)
{
    this->tablero->get(x)->get(y)->setCelula(c);
}
