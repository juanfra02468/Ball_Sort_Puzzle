/*
 * TADJuego.h
 *
 *  Created on: 5 dic. 2020
 *      Author: juanfra
 */

#ifndef TADJUEGO_H_
#define TADJUEGO_H_

#include "TADTablero.h"
#include "entorno.h"

struct TJuego {
	TTablero t;
	int DeDonde;
	int puntos;
};



void iniciar(TJuego &j);

void BallSort(TJuego &j);

void terminar();


#endif /* TADJUEGO_H_ */
