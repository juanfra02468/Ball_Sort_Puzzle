/*
 * TADPila.h
 *
 *  Created on: 5 dic. 2020
 *      Author: juanfra
 */

#ifndef TADPILA_H_
#define TADPILA_H_

// TAM es el número de bolas diferentes que se pueden almacenar en cada Pila
// ¡ATENCIÓN! El entorno solo está preparado para mostrar un máximo de 6 bolas

const int TAM=6;

typedef int TipoVector[TAM];
struct TPila{
	TipoVector p;
	int ocupadas;
	int bolasXPila;
};

/*
  * PRE:  { }
  * POST: { Inicia la pila p vacía y el campo bolasXPila del TADPila}
  * Complejidad:O(1)
  */
void crearPila (TPila &p, int bolasXPila);


/*
  * PRE:  { p debe estar correctamente iniciado}
  * POST: { devuelve true si la pila está vacía y false en caso contrario}
  * Complejidad:O(1)
  */
bool estaVacia(TPila p);


/*
  * PRE:  { p debe estar correctamente iniciado}
  * POST: { devuelve true si la pila está llena y false en caso contrario, en funcion de sus bolasXPila}
  * Complejidad:O(1)
  */
bool estaLlena(TPila p);



/*
  * PRE:  { p debe estar correctamente iniciada y no estar llena, 1 <= dato <= TAM}
  * POST: { Pone el valor dato en la cima de la pila}
  * Complejidad:O(1)
  */
void apilar (TPila &p, int valor);


/*
  * PRE:  { p debe estar correctamente iniciado y no estar vacía}
  * POST: { Borra el valor almacenado en la cima de la pila}
  * Complejidad:O(1)
  */
void desapilar (TPila &p);




/*
  * PRE:  { p debe estar correctamente iniciado y no estar vacía}
  * POST: { Devuelve el valor almacenado en la cima de la pila}
  * Complejidad:O(1)
  */
int cima (TPila p);


/*
  * PRE:  { p debe estar correctamente iniciado y estar llena}
  * POST: { devuelve si o no dependiendo de si la pila tiene todas las bolas del mismo color}
  * Complejidad:O(n)
  */
bool mismoColor (TPila p);

/*
  * PRE:  { p debe estar correctamente iniciado}
  * POST: {Muestra el contenido de la pila}
  * Complejidad:O(n)
  */

void mostrar (TPila p);

/*
  * PRE:  { p debe estar correctamente iniciado}
  * POST: {devuelve el numero de bolasXPila}
  * Complejidad:O(1)
  */

int BolaporPila (TPila p);

/*
  * PRE:  { p debe estar correctamente iniciado y estar llena}
  * POST: {devuelve el color de una posicion en concreto de la pila}
  * Complejidad:O(1)
  */
int ColorporPila (TPila p, int pos);

/*
  * PRE:  { p debe estar correctamente iniciado}
  * POST: { devuelve el número de elementos de la pila}
  * Complejidad:O(1)
  */
int cuantos (TPila p);



#endif

