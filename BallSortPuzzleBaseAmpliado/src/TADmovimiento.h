/*
 * TADmovimiento.h
 *
 *  Created on: 26 dic. 2020
 *      Author: juanfra
 */

#ifndef TADMOVIMIENTO_H_
#define TADMOVIMIENTO_H_
const int MAXIMO=5;

struct TMovimiento{
	int pilaorigen;
	int piladestino;
	int color;
	int posorigen;
	int posdestino;
};


typedef TMovimiento mov[MAXIMO];

struct TDeshacer{
	mov v;
	int ocupadas;
};
/*
  * PRE:  { }
  * POST: { Inicia deshacer}
  * Complejidad:O(1)
  */
void iniciar (TDeshacer &d);
/*
  * PRE:  { }
  * POST: { Iniciamos el movimiento}
  * Complejidad:O(1)
  */
void darValorMov (TMovimiento &m, int piladestino, int pilaorigen, int bolaOrigen, int posorigen, int posdestino);
/*
  * PRE:  { m debe estar correctamente iniciada}
  * POST: { Devuelve el valor de pilaorigen}
  * Complejidad:O(1)
  */
int pilaOrigen (TMovimiento &m);
/*
  * PRE:  { d debe estar correctamente iniciada}
  * POST: { Devuelve el valor pilaorigen de la ultima celda del vector deshacer}
  * Complejidad:O(1)
  */
int ConsultarPilaOrigen (TDeshacer &d);
/*
  * PRE:  { m debe estar correctamente iniciada}
  * POST: { Devuelve el valor de piladestino}
  * Complejidad:O(1)
  */
int pilaDestino (TMovimiento &m);
/*
  * PRE:  { d debe estar correctamente iniciada}
  * POST: { Devuelve el valor piladestino de la ultima celda del vector deshacer}
  * Complejidad:O(1)
  */
int ConsultarPilaDestino (TDeshacer &d);
/*
  * PRE:  { m debe estar correctamente iniciada}
  * POST: { Devuelve el valor del color}
  * Complejidad:O(1)
  */
int color (TMovimiento &m);
/*
  * PRE:  { d debe estar correctamente iniciada}
  * POST: { Devuelve el valor color de la ultima celda del vector deshacer}
  * Complejidad:O(1)
  */
int colorBola (TDeshacer &d);
/*
  * PRE:  { m debe estar correctamente iniciada}
  * POST: { Devuelve el valor de la posicion origen}
  * Complejidad:O(1)
  */
int posOrigen (TMovimiento &m);
/*
  * PRE:  { d debe estar correctamente iniciada}
  * POST: { Devuelve el valor posicion origen de la ultima celda del vector deshacer}
  * Complejidad:O(1)
  */
int ConsultarPosicionOrigen (TDeshacer &d);
/*
  * PRE:  { m debe estar correctamente iniciada}
  * POST: { Devuelve el valor de la posicion destino}
  * Complejidad:O(1)
  */
int posDestino (TMovimiento &m);
/*
  * PRE:  { d debe estar correctamente iniciada}
  * POST: { Devuelve el valor pilaorigen de la ultima celda del vector deshacer}
  * Complejidad:O(1)
  */
int ConsultarPosicionDestino (TDeshacer &d);
/*
  * PRE:  { d y m deben estar correctamente iniciadas}
  * POST: {Va guardando el ultimo movimiento que hacemos en la ultima posicion del vector borrando la primera posicion una vez que esta lleno el vector}
  * Complejidad:O(n)
  */
void apilar(TDeshacer &d, TMovimiento &m);
/*
  * PRE:  { d debe estar correctamente iniciadas}
  * POST: {Elimina la ultima posicion del vector una vez se pulsa la TECLA F2}
  * Complejidad:O(1)
  */
void desapilar(TDeshacer &d);

#endif /* TADMOVIMIENTO_H_ */
