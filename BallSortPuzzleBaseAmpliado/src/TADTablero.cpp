/*
 * TADTablero.cpp
 *
 *  Created on: 5 dic. 2020
 *      Author: juanfra
 */
#include <iostream>
using namespace std;
#include "TADTablero.h"


void crearunaPila (TTablero &t, int bolasXPila, int pos){
	crearPila(t.v[pos],bolasXPila);
}

void cargarConf (TTablero &t, int pilasSin, int pilas, int bolasXPila, int m[MAXIMO_TAMANO][MAXIMO_TAMANO]){
		int i, j;
		t.TotalPilas=pilasSin+pilas;
		t.llenas=pilas;
		t.vacias=pilasSin;
			for (i=0; i<t.TotalPilas; i++){
				crearPila(t.v[i],bolasXPila);
			}
			for ( i = 0; i < pilas; i++){
				for ( j = bolasXPila-1; j >=0; j--){
					apilar(t.v[i],m[i][j]);
				}
			}
}

void ponerValorTorre (TTablero &t, int color, int torre){
	apilar(t.v[torre], color);
}


int cimaTorre (TTablero &t, int torre){
	return cima(t.v[torre]);
}



void desapilarTorre (TTablero &t, int torre){
	desapilar (t.v[torre]);

}



int cuantosTorre (TTablero &t, int torre){
	return cuantos (t.v[torre]);
}


bool vaciaTorre(TTablero &t, int torre){
	return (estaVacia(t.v[torre]));
}

bool llenaTorre(TTablero &t, int torre){
	return (estaLlena(t.v[torre]));
}

void mostrar (TTablero t){
	int i;
	for (i = 0; i < t.llenas; i++){
		mostrar (t.v[i]);
	}
}

void unaPilaMas (TTablero &t){
	t.TotalPilas++;
	t.vacias++;
}

int pilasllenas (TTablero t){
	return t.llenas;
}

int pilasvacias (TTablero t){
	return t.vacias;
}

int totalpilas (TTablero t){
	return t.TotalPilas;
}

int colorXTorre (TTablero t, int pila, int pos){
		return ColorporPila(t.v[pila],pos);
}


int BolasXTorre (TTablero t){
	return BolaporPila(t.v[0]);
}


bool resuelto (TTablero t){
	int i, contador;
	contador=0;
	i=0;
	bool resuelto;
	resuelto=false;
	while (i<t.TotalPilas){
		if (mismoColor(t.v[i])==true){
			contador++;
		}
		i++;
	}
	if (contador==t.llenas){
		resuelto=true;
	}
	return resuelto;
}


