/*
 * prueba_TTablero.h
 *
 *  Created on: 2 ene. 2021
 *      Author: juanfra
 */

#ifndef PRUEBA_TTABLERO_H_
#define PRUEBA_TTABLERO_H_

#include "TADTablero.h"

/*
 * Prueba automática de la operacion cargarconf
 * DESCRIPCIÓN: Se crean todas las torres y se comprueba que están vacías,
 * cargando la configuracion dada.
 *
 */
void pr_cargarconf();

/*
 * Prueba automática de la operacion pr_ponerValor_cima_cuantosTorre
 * DESCRIPCIÓN: En la primera torre se almacena el 4,3,2,1
 * En la segunda: el 3,2,2,1
 * En la tercera: 3,3,2,1
 * En la cuarta: 4,4,4,1
 * Vamos a probar a desapilar valores de la torre 1, hasta dejarla sin valores, vamos a comprobar
 * que la torre esta vacia, y luego vamos a apilar hasta 4 valores que es lo maximo que permite
 * debido a bolasXPila y vamos a comprobar que esta llena, sin funciona en la primera funciona en las demas
 */

void pr_ponerValor_cima_cuantosTorre();

/*
 * Prueba automática de la operacion pr_desapilar_cima_cuantosTorre
 * DESCRIPCIÓN: En la primera torre se almacena el 4,3,2,1
 * En la segunda: el 3,2,2,1
 * En la tercera: 3,3,2,1
 * En la cuarta: 4,4,4,1
 * Primeramente vamos a desapilar en todas las pilas un elemento y vamos a comprobar la cima y
 * cuantos elementos hay en cada pila, vamos a desapilar la pila tercera tantas veces como sea el
 * valor de su cima y vamos a comprobar que la cima esta bien y cuantos elementos hay en la pila
 * tambien. La tercera torre queda vacía
 */


void pr_desapilar_cima_cuantosTorre();


/*
 * Prueba automática de la operacion pr_colorXTorre_unaPilaMas_CrearunaPila
 * DESCRIPCIÓN: En la primera torre se almacena el 4,3,2,1
 * Lo primero que vamos a hacer es añadir una pila mas al tablero, por lo tanto deberemos de darle
 * valores a esa pila nueva y crearla, posteriormente consultaremos una posicion en concreto la 2
 * de esa pila y mostraremos su valor y si es correcto pasara las pruebas
 * */

void pr_colorXTorre_unaPilaMas_CrearunaPila();

/*
 * Prueba automática de la operacion pr_resuelto
 * DESCRIPCIÓN:
 * Vamos rellenar las pilas con valores distintos en cada pila comprobaremos que el juego no esta
 * resuelto, posteriormente desapilamos todas las pilas y las rellenamos
 * con valores iguales en cada pila y comprobaremos que el juego esta resuelto
 * */

void pr_resuelto();

/*
 * Prueba automática de la operacion pr_pruebasTorres
 * DESCRIPCIÓN:
 * Se llevan a cabo todas las pruebas
 * */
void pr_pruebasTorres();




#endif /* PRUEBA_TTABLERO_H_ */
