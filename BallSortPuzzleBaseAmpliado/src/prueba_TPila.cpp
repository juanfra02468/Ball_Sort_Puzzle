/*
 * prueba_TPila.cpp
 *
 *  Created on: 2 ene. 2021
 *      Author: juanfra
 */

#include "prueba_TPila.h"
#include <iostream>
using namespace std;

void mostrar_pila (TPila p) {
	int i;
	cout<<"Mostraremos el contenido de la pila p: Desde el principio hasta la cima"<<endl;
	for (i=0;i<p.ocupadas;i++){
		cout<<"El contenido de la pila es "<<p.p[i]<<endl;
	}
	cout<<"Fin del mostrar pila"<<endl;
}


void pr_crearPila () {
	TPila t;
	cout <<"Inicio - prueba automática de crearPila"<<endl;
	crearPila(t,4);
	if (estaVacia(t)!=true){
		cout<<"Error la pila no esta vacía"<<endl;
	}
	if (BolaporPila(t)!=4){
		cout<<"Error el numero de bolas por pila es distinto de 4"<<endl;
	}
	cout <<"Fin - prueba crearPila"<<endl<<endl;
}

void pr_estaVacia () {
	TPila t;
	cout <<"Inicio - prueba automática de estaVacia"<<endl;
	crearPila(t,4);
	if (estaVacia(t)==true){
		apilar(t,2);
			if (estaVacia(t)==true){
				cout<<"Error la pila esta vacia"<<endl;
			}
	}
	cout <<"Fin - prueba estaVacia"<<endl<<endl;
}


void pr_estaLlena () {
	TPila t;
	int i;
	cout <<"Inicio - prueba automática de estaLlena"<<endl;
	crearPila(t,4);
	if (estaLlena(t)==false){
		for (i=0;i<BolaporPila(t);i++){
			apilar(t,i+1);
		}
			if (estaLlena(t)==false){
				cout<<"Error la pila no esta llena"<<endl;
			}
			else{
				desapilar(t);
				if (estaLlena(t)==true){
					cout<<"Error la pila esta llena"<<endl;
				}
			}
	}
	cout <<"Fin - prueba estaLlena"<<endl<<endl;
}


void pr_apilar (){


	cout <<"Inicio - prueba supervisada de apilar"<<endl;
	TPila t;
		int i;
		crearPila(t,4);
			for (i=0;i<BolaporPila(t);i++){
				apilar(t,i+1);
			}
		mostrar_pila(t);
		if (t.p[0]!=1 || t.p[1]!=2 || t.p[2]!=3 || t.p[3]!=4){
			cout<<"Error el contenido no se ha insertado en el orden correspondiente"<<endl;
		}

	cout <<"La pila mostrada debe ser [1, 2, 3, 4]"<<endl;
	cout <<"Fin - prueba apilar"<<endl<<endl;
}




void pr_desapilar() {

	cout <<"Inicio - prueba automática de desapilar"<<endl;
	TPila t;
		int i;
		crearPila(t,4);
			for (i=0;i<BolaporPila(t);i++){
				apilar(t,i+1);
			}
		desapilar(t);
		if (cima(t)!=3){
			cout<<"La cima no es 3"<<endl;
		}
		desapilar(t);
		if (cima(t)!=2){
			cout<<"La cima no es 2"<<endl;
		}
		desapilar(t);
		if (cima(t)!=1){
			cout<<"La cima no es 1"<<endl;
		}
	cout <<"Fin - prueba desapilar"<<endl<<endl;
}


void pr_cima() {

	cout <<"Inicio - prueba automática de cima"<<endl;
	TPila t;
	crearPila(t,4);
		apilar(t,1);
		if (cima(t)!=1){
			cout<<"La cima no es 1"<<endl;
		}
		apilar(t,2);
		if (cima(t)!=2){
			cout<<"La cima no es 2"<<endl;
		}
		apilar(t,3);
		if (cima(t)!=3){
			cout<<"La cima no es 3"<<endl;
		}
	cout <<"Fin - prueba  cima"<<endl<<endl;
}

void pr_mismocolor(){
	int i;
	i=0;
	cout <<"Inicio - prueba automática de mismoColor"<<endl;
		TPila t;
		crearPila(t,4);
			while (i<BolaporPila(t)){
				apilar(t,1);
				i++;
			}
			if (mismoColor(t)!=true){
				cout<<"La pila no tiene el mismo color"<<endl;
			}
			mostrar_pila(t);
			i=0;
			while (i<BolaporPila(t)){
				desapilar(t);
				i++;
			}
			i=0;
			while (i<BolaporPila(t)){
				if (i<=2){
					apilar(t,1);
				}
				else{
					apilar(t,2);
				}
				i++;
			}
			mostrar_pila(t);
			if (mismoColor(t)==true){
				cout<<"La pila tiene el mismo color"<<endl;
			}
	cout <<"Fin - prueba  mismoColor"<<endl<<endl;
}

void pr_colorporpila() {
	int i;
	i=0;
	cout <<"Inicio - prueba automática de colorporpila"<<endl;
	TPila t;
	crearPila(t,4);
	while (i<BolaporPila(t)){
		apilar(t,i+1);
		i++;
	}
	mostrar_pila(t);
	if (ColorporPila(t,3)!=4){
		cout<<"Lo siento pero el valor no se corresponde con el color esperado"<<endl;
	}
	cout <<"Fin - prueba  colorporpila"<<endl<<endl;
}

void pr_cuantos() {

	cout <<"Inicio - prueba automática de  cuantos"<<endl;
	TPila t;
	crearPila(t,4);
		if (cuantos(t)!=0){
			cout<<"Error la pila no esta vacia"<<endl;
		}
		apilar(t,3);
		if (cuantos(t)!=1){
			cout<<"Error la pila esta vacia"<<endl;
		}
		apilar(t,6);
		if (cuantos(t)!=2){
			cout<<"Error la pila esta vacia"<<endl;
		}
		desapilar(t);
		if (cuantos(t)!=1){
			cout<<"Error la pila esta vacia"<<endl;
		}
		desapilar(t);
		if (cuantos(t)!=0){
			cout<<"Error la pila no esta vacia"<<endl;
		}
	cout <<"Fin - prueba  cuantos"<<endl<<endl;
}
/*
 * DESCRIPCIÓN: Se ejecuta el conjunto de las pruebas de la pila
*/

void pr_pruebas_pila () {
	cout <<"INICIO PRUEBAS PILA"<<endl;
	pr_crearPila();
	pr_estaVacia();
	pr_estaLlena();
	pr_apilar();
	pr_desapilar();
	pr_cima();
	pr_mismocolor();
	pr_colorporpila();
	pr_cuantos();
	cout <<"FIN PRUEBAS PILA"<<endl;
}



