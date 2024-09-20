/*
 * prueba_TTablero.cpp
 *
 *  Created on: 2 ene. 2021
 *      Author: juanfra
 */



#include "prueba_TTablero.h"
#include <iostream>

using namespace std;

void pr_cargarconf(){
	TTablero t;
	int i;
	int m[MAXIMO_TAMANO][MAXIMO_TAMANO]={{1,2,3,4},{1,2,2,3},{1,2,3,3},{1,4,4,4}};
	cargarConf(t,2,4,4,m);
	if (pilasvacias(t)!=2){
		cout<<"Error las pilas vacias no son 2"<<endl;
	}
	if (pilasllenas(t)!=4){
		cout<<"Error las pilas llenas no son 4"<<endl;
	}
	if (BolasXTorre(t)!=4){
		cout<<"Error las bolas por torre no son 4"<<endl;
	}

	for (i=0;i < pilasllenas(t); i++){
		if (cimaTorre(t,i) != 1 || cuantosTorre(t,i)!=4)
				cout << "Error la cima deberia de ser 1"<<i<<endl;

	}
}


void pr_ponerValor_cima_cuantosTorre(){
	TTablero t;
	int i;
	int m[MAXIMO_TAMANO][MAXIMO_TAMANO]={{1,2,3,4},{1,2,2,3},{1,2,3,3},{1,4,4,4}};
	cargarConf(t,2,4,4,m);
	cout <<"Inicio - prueba automática de ponerValor_cima_cuantosTorre"<<endl;
	for (i=0;i<BolasXTorre(t);i++){
		desapilarTorre(t,0);
	}
	if (cuantosTorre(t, 0)!=0 || vaciaTorre(t, 0)==false){
		cout<<"Error la torre no esta vacia"<<endl;
	}
	for (i=0;i<BolasXTorre(t);i++){
		ponerValorTorre(t,i+1,0);
	}
	if (cuantosTorre(t, 0)!=4 || llenaTorre(t, 0)==false){
		cout<<"Error la torre no esta llena"<<endl;
	}
	cout <<"Fin - prueba ponerValorTorre"<<endl<<endl;

}

void pr_desapilar_cima_cuantosTorre(){

		TTablero t;
		int i;
		int m[MAXIMO_TAMANO][MAXIMO_TAMANO]={{1,2,3,4},{1,2,2,3},{1,2,3,3},{1,4,4,4}};
		cargarConf(t,2,4,4,m);
		cout <<"Inicio - prueba automática de desapilar_cima_cuantosTorre"<<endl;
		for (i=0;i<pilasllenas(t);i++){
			desapilarTorre(t,i);
		}
		if (cimaTorre(t,0)!=2 || cimaTorre(t,1)!=2 || cimaTorre(t,2)!=2 || cimaTorre(t,3)!=4){
			cout<<"Error las cimas no se corresponden con lo que deberia ser"<<endl;
		}
		for (i=0;i<pilasllenas(t);i++){
			if (cuantosTorre(t, i)!=3){
				cout<<"Error en la cantidad de la pila: "<<i<<endl;
			}
		}
		for (i=1;i<cimaTorre(t,2);i++){
			desapilarTorre(t,2);
		}
		if (cimaTorre(t,2)!=3 || cuantosTorre(t,2)!=1){
			cout<<"Error en la prueba de la pila tercera"<<endl;
		}
		cout <<"Fin - prueba desapilar_cima_cuantosTorre"<<endl<<endl;

}


void pr_colorXTorre_unaPilaMas_CrearunaPila(){
	TTablero t;
	int i;
	int m[MAXIMO_TAMANO][MAXIMO_TAMANO]={{1,2,3,4},{1,2,2,3},{1,2,3,3},{1,4,4,4}};
	cargarConf(t,2,4,4,m);
	cout <<"Inicio - prueba automática de colorXTorre_unaPilaMas_CrearunaPila"<<endl;
	unaPilaMas(t);
	if (totalpilas(t)!=7){
		cout<<"Error el total de pilas no es 7"<<endl;
	}
	crearunaPila(t,BolasXTorre(t),totalpilas(t)-1);
	for (i=0;i<BolasXTorre(t);i++){
		ponerValorTorre(t,i+1,totalpilas(t)-1);
	}
	if (colorXTorre(t,totalpilas(t)-1,2)!=3){
		cout<<"Error el valor no es 3"<<endl;
	}
	cout <<"Fin - prueba colorXTorre_unaPilaMas_CrearunaPila"<<endl<<endl;
}

void pr_resuelto(){
	TTablero t;
	int i,j,color;
	int m[MAXIMO_TAMANO][MAXIMO_TAMANO]={{1,2,3,4},{1,2,2,3},{1,2,3,3},{1,4,4,4}};
	cargarConf(t,2,4,4,m);
	cout <<"Inicio - prueba resuelto"<<endl;
	if (resuelto(t)==true){
		cout<<"Error el juego esta resuelto"<<endl;
	}
	for (i=0;i<pilasllenas(t);i++){
			for (j=0;j<BolasXTorre(t);j++){
				desapilarTorre(t,i);
			}
	}
	for (i=0;i<pilasllenas(t);i++){
		color=i+1;
			for (j=0;j<BolasXTorre(t);j++){
				ponerValorTorre(t,color,i);
			}
	}
	if (resuelto(t)==false){
		cout<<"Error el juego no esta resuelto"<<endl;
	}


	cout <<"Fin - prueba resuelto"<<endl<<endl;
}

/*
 * Se llevan a cabo todas las pruebas
 * */
void pr_pruebasTorres(){
	cout <<"INICIO PRUEBAS TORRES"<<endl;
	pr_cargarconf();
	pr_ponerValor_cima_cuantosTorre();
	pr_desapilar_cima_cuantosTorre();
	pr_colorXTorre_unaPilaMas_CrearunaPila();
	pr_resuelto();
	cout <<"FIN PRUEBAS TORRES"<<endl;
}
