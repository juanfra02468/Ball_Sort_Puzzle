/*
 * prueba_TPila.h
 *
 *  Created on: 2 ene. 2021
 *      Author: juanfra
 */

#ifndef PRUEBA_TPILA_H_
#define PRUEBA_TPILA_H_

#include "TADPila.h"

/*
 * 	DESCRIPCIÓN: Muestra el contenido de la pila p
 * 	desde el fondo hasta la cima de la pila
 * 	Es un módulo auxiliar útil para las pruebas supervisadas
 */
void mostrar_pila (TPila p);

/*
 * Prueba automática de la opración crearPila
 * DESCRIPCIÓN: se crea una pila y se prueba que está correctamente iniciada
 * 				comprobando que está vacía, también se comprueba que bolasXPila tiene
 * 				el valor que le hemos dado inicialmente
 *
 */
void pr_crearPila ();


/*
 *  Prueba automática de la operación estaVacía
 *  DESCRIPCIÓN: se crea una pila y se comprueba que "estaVacia" devuelve true
 *  			 se añade un valor a la pila y se comprueba que "estaVacia" devuelve false
 *  			 en caso contrario se escriben mensajes de error
 *
 */
void pr_estaVacia ();

/*
 *  Prueba automática de la operación estaLlena
 *  DESCRIPCIÓN: se crea una pila y se comprueba que "estaLlena" devuelve false
 *  			 se almacenan en ella valores de 0 hasta BolaXPila y se comprueba que "estaLlena" devuelve true
 *  			 se elimina un valor de la pila y se comprueba que "estaLlena" devuelve false
 *  			 en caso contrario se escriben mensajes de error
 *
 */
void pr_estaLlena ();

/*
 * Prueba supervisada de la operación apilar
 * DESCRIPCIÓN: se crea una pila y	se almacenan en ella valores de 0 hasta BolaXPila, en este orden
 * 		El resultado al mostrar la pila será la secuencia de elementos 1, 2, 3, 4.
*/
void pr_apilar ();


/*
 * Prueba automática de la moperación desapilar
 * DESCRIPCIÓN: se crea una pila y se almacenan en ella valores de 1 hasta BolasXPila, en este orden
 * 		        se ejecuta desapilar y después se comprueba que la cima es 3
 * 		        se ejecuta desapilar y después se comprueba que la cima es 2
 * 		        se ejecuta desapilar y después se comprueba que la cima es 1
 * 		        se ejecuta desapilar y se comprueba que la pila está vacía
 * 	            en caso contrario se escriben mensajes de error
 *
*/
void pr_desapilar();


/*
 * Prueba automática de la operación cima
 * DESCRIPCIÓN: se crea una pila
 * 		        se apila el valor 1 y después se comprueba que cima devuelve 1
 * 		        se apila el valor 2 y después se comprueba que cima devuelve 2
 * 		        se apila el valor 3 y después se comprueba que cima devuelve 3
 * 		        en caso contrario se escriben mensajes de error
*/
void pr_cima ();

/*
 * Prueba automática de la operación mismoColor
 * DESCRIPCIÓN: se crea una pila
 * 		        se apilan los valores 1,1,1,1 y se comprueba que es el mismo valor
 * 		        se apilan los valores 1,1,1,2 y se comprueba que no son el mismo valor
*/

void pr_mismocolor();


/*
 * Prueba automática de la operación colorPorPila
 * DESCRIPCIÓN: se crea una pila
 * 				se apilan valores del 0 hasta BolasXPila y luego se comprueba si en la posicion 3 de la pila
 * 				se encuentra el valor el valor 4, si es asi devuelve true sino false.
*/

void pr_colorporpila();

/*
 * Prueba automática de la operación cuantos
 * DESCRIPCIÓN: se crea una pila y después se comprueba que cuantos devuelve 0
 * 		        se apila un valor cualquiera y después se comprueba que cuantos devuelve 1
 * 		        se apila otro valor y después se comprueba que cuantos devuelve 2
 * 		        se ejecuta desapilar y después se comprueba que cuantos devuelve 1
 * 		        se ejecuta desapilar y después se comprueba que cuantos devuelve 0
 *              en caso contrario se escriben mensajes de error
 *
*/
void pr_cuantos();


/*
 * DESCRIPCIÓN: Se ejecuta el conjunto de todas las pruebas de la pila
*/
void pr_pruebas_pila () ;




#endif /* PRUEBA_TPILA_H_ */
