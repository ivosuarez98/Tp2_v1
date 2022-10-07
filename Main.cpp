/*
 * Main.cpp
 *
 *  Created on: 07/10/2022
 *      Author: algo2
 */
#include <iostream>
#include "Tablero.h"
#include "Celula.h"

int main (void)
{
    Tablero * tablero = new Tablero(10,10);
    Celula* c=new Celula();

/*
 *
 * INIT TABLERO
 *
 */
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            tablero->setCasilla(i,j,*c);
        }
    }

    c->setCelula(vivo);
    tablero->setCasilla(1,1,*c);// Eje X vertical
    tablero->setCasilla(2,1,*c);// Eje Y H

/*
     *
 * Print TABLERO
 *
 */

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {

            std::cout<<tablero->getCasilla(i,j)->getEstado();
        }
        std::cout<<"\n";
    }

    return 0;
}
