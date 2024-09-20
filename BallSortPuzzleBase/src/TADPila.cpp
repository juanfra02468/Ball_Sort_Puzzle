/*
 * TADPila.cpp
 *
 *  Created on: 5 dic. 2020
 *      Author: juanfra
 */

#include "TADPila.h"
#include <iostream>
using namespace std;

void crearPila (TPila &p, int bolasXPila){
	p.ocupadas=0;
	p.bolasXPila=bolasXPila;
}


bool estaVacia(TPila p){
	return (p.ocupadas==0);
}


bool estaLlena(TPila p){
	return (p.ocupadas==p.bolasXPila);
}


void apilar (TPila &p, int valor){
	if (p.ocupadas<p.bolasXPila){
			p.p[p.ocupadas]=valor;
			p.ocupadas++;
	}
}


void desapilar (TPila &p){
		p.ocupadas--;
}


int cima (TPila p){
	return p.p[p.ocupadas-1];
}


bool mismoColor (TPila p){
	int i;
	i=1;
	bool enc=true;
	if (p.ocupadas==p.bolasXPila){
		while (i<p.ocupadas && enc){
			if (p.p[i]!=p.p[i-1]){
				enc=false;
			}
			i++;
		}
	}
	else{
		enc=false;
	}
	return enc;
}

void mostrar (TPila p){
	int i;
	for (i = 0;i<p.ocupadas;i++){
		cout<<"Las posiciones "<<i<<" tiene como valores "<<p.p[i]<<endl;
	}
}

int BolaporPila (TPila p){
	return p.bolasXPila;
}

int ColorporPila (TPila p, int pos){
		return p.p[pos];
}

int cuantos (TPila p){
	return p.ocupadas;
}





