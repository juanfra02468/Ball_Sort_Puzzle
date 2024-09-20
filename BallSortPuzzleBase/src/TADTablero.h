/*
 * TADTablero.h
 *
 *  Created on: 5 dic. 2020
 *      Author: juanfra
 */

#ifndef TADTABLERO_H_
#define TADTABLERO_H_
#include "TADPila.h"

const int MAX=10;
const int MAXIMO_TAMANO=12;

typedef TPila Vector[MAX];
struct TTablero{
	Vector v;
	int TotalPilas;
	int llenas;
	int vacias;
};
/*
  * PRE:  { }
  * POST: { Crea una pila vacia en el tablero}
  * Complejidad: O(1)
  */
void crearunaPila (TTablero &t, int bolasXPila, int pos);
/*
  * PRE:  { El fichero de configuracion debe contener valores para poder asignarlos en este modulo }
  * POST: { Carga la configuracion del fichero de configuracion y lo vuelva sobre el TADTablero y sobre las pilas que conforman el tablero, creando tambien las pilas totales que van a formar el tablero}
  * Complejidad: O(n²)
  */
void cargarConf(TTablero &t, int pilasSin, int pilas, int bolasXPila, int m[MAXIMO_TAMANO][MAXIMO_TAMANO]);

/*
  * PRE:  { t debe estar correctamente iniciada y la torre indicada no estar llena, 1 <= color <= 8, 1<= torre <= MAX}
  * POST: { Pone el valor color en la cima de la torre indicada}
  * Complejidad: O(1)
  */
void ponerValorTorre (TTablero &t, int color, int torre);

/*
  * PRE:  { t debe estar correctamente iniciada y la torre indicada no estar llena, 1<= torre <= MAX}
  * POST: { Devuelve el valor almacenado en la cima de la torre indicada}
  * Complejidad: O(1)
  */
int cimaTorre (TTablero &t, int torre);
/*
  * PRE:  { t debe estar correctamente iniciada y la torre indicada no estar vacía, 1<= torre <= MAX}
   * POST: { Borra el valor almacenado en la cima de la torre indicada}
  * Complejidad: O(1)
  */
void desapilarTorre (TTablero &t, int torre);
/*
  * PRE:  { t debe estar correctamente iniciada, 1<= torre <= MAX}
   * POST: { devuelve el número de elementos de la torre indicada}
  * Complejidad: O(1)
  */
int cuantosTorre (TTablero &t, int torre);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: { devuelve true si la torre indicada está vacía y false en caso contrario}
  * Complejidad: O(1)
  */
bool vaciaTorre(TTablero &t, int torre);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: { devuelve true si la torre indicada está llena y false en caso contrario}
  * Complejidad: O(1)
  */
bool llenaTorre(TTablero &t, int torre);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: { devuelve true si la torre indicada está vacía y false en caso contrario}
  * Complejidad: O(n)
  */
void mostrar (TTablero t);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: { Aumenta en 1 en numero de pilas totales}
  * Complejidad: O(1)
  */
void unaPilaMas (TTablero &t);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: {devuelve el numero de pilas llenas que forman el tablero inicialmente}
  * Complejidad: O(1)
  */
int pilasllenas (TTablero t);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: {devuelve el numero de pilas vacias que forman el tablero inicialmente}
  * Complejidad: O(1)
  */

int pilasvacias (TTablero t);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: {devuelve el numero de pilas totales que forman el tablero inicialmente}
  * Complejidad: O(1)
  */

int totalpilas (TTablero t);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: {devuelve el color de una pila en concreto en una posicion en concreto de esa pila}
  * Complejidad: O(1)
  */
int colorXTorre (TTablero t, int pila, int pos);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: {devuelve el numero de bolasXPila que se puede almacenar en una pila en concreto}
  * Complejidad: O(1)
  */
int BolasXTorre (TTablero t);
/*
   * PRE:  { t debe estar correctamente iniciada  1<= torre <= MAX}
  * POST: {devuelve true si cada pila del tablero tiene el mismo color desde el principio hasta su cima y si se cumple para todas las pilas devuelve true en caso contrario devuelve false}
  * Complejidad: O(n)
  */
bool resuelto (TTablero t);
#endif /* TADTABLERO_H_ */
