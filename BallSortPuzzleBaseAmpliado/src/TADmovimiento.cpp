/*
 * TADmovimiento.cpp
 *
 *  Created on: 26 dic. 2020
 *      Author: juanfra
 */


#include "TADmovimiento.h"
#include <iostream>
using namespace std;

void iniciar (TDeshacer &d){
	d.ocupadas=0;
}

void darValorMov (TMovimiento &m, int piladestino, int pilaorigen, int bolaOrigen, int posorigen, int posdestino){
	m.pilaorigen=pilaorigen;
	m.piladestino=piladestino;
	m.color=bolaOrigen;
	m.posorigen=posorigen;
	m.posdestino=posdestino;
}

void apilar(TDeshacer &d, TMovimiento &m){
	int i;
	i=1;
	if (d.ocupadas<MAXIMO){
		d.v[d.ocupadas]=m;
		d.ocupadas++;
	}
	else{
		if (d.ocupadas==MAXIMO){
			while (i<d.ocupadas){
				d.v[i-1]=d.v[i];
				i++;
			}
		d.v[d.ocupadas-1]=m;
		}
	}

}

int pilaOrigen (TMovimiento &m){
	return m.pilaorigen;
}

int ConsultarPilaOrigen (TDeshacer &d) {
	return pilaOrigen(d.v[d.ocupadas-1]);
}

int pilaDestino (TMovimiento &m){
	return m.piladestino;
}

int ConsultarPilaDestino (TDeshacer &d) {
	return pilaDestino(d.v[d.ocupadas-1]);
}

int color (TMovimiento &m){
	return m.color;
}

int colorBola (TDeshacer &d) {
	return color(d.v[d.ocupadas-1]);
}


int posOrigen (TMovimiento &m){
	return m.posorigen;
}

int ConsultarPosicionOrigen (TDeshacer &d) {
	return posOrigen(d.v[d.ocupadas-1]);
}

int posDestino (TMovimiento &m){
	return m.posdestino;
}

int ConsultarPosicionDestino (TDeshacer &d) {
	return posDestino(d.v[d.ocupadas-1]);
}

void desapilar (TDeshacer &d){
		d.ocupadas--;
}


