/*
 * TADJuego.cpp
 *
 *  Created on: 5 dic. 2020
 *      Author: juanfra
 */
#include "TADJuego.h"
#include <stdlib.h>
#include <ctime>



void iniciar (TJuego &j){
	int pila = 0;
	int i, pos, color;
	int bolasXPila, puntos, pilas, pilasSin, deDonde;
	int m[MAX_TAMANO][MAX_TAMANO];
	//Los datos almacenados en el fichero de configuración se copian en las variables
		//definidas anteriormente
		if (entornoCargarConfiguracion(pilas, pilasSin, bolasXPila, deDonde, puntos,m)) {
			j.DeDonde=deDonde;
			j.puntos=puntos;

			//Se abre la ventana gráfica con un número de pilas igual a pilas+pilasSin
			entornoIniciar(pilas + pilasSin);
			// Se crean las torres, y se llenan solamente las pilas, las pilasSin se dejan vacias
			cargarConf(j.t,pilasSin,pilas,bolasXPila,m);
			//se pintan todas las pilas con espacio para almacenar un número de bolas igual a bolasXPila
			for (i = 0; i < pilas+pilasSin; i++){
				entornoPintarPila(i, bolasXPila);
			}

			//Las primeras pilas (tantas como indica la variable "pilas") se llenan, de la misma forma,
		    //con 4 bolas de diferentes colores
			for (i=0;i<pilas;i++){
				for (pos=0;pos<bolasXPila;pos++){
					color=colorXTorre(j.t,i,pos);
					entornoPonerBola(i, color, pos, bolasXPila);
				}
			}

			entornoMarcarPosicion(pila);
			entornoPonerPuntuacion(puntos);
			}
}

void BallSort(TJuego &j){
		TipoTecla tecla;
		bool salir = false;
		bool bandera=false;
		int pila = 0;
		int bolasXPila,pilas, pilasSin;
		int pilaorigen, piladestino;
		int bolaOrigen;
		int posOrigen,posDestino;

		//valor inicial de las variables
				pila = 0;	  //al comienzo del juego la pila seleccionada es la 0
			while (!salir) {
				bolasXPila=BolasXTorre(j.t);
				pilas=pilasllenas(j.t);
				pilasSin=pilasvacias(j.t);
				//A partir de este momento se procesan las teclas que el jugador pulse
				//Si pulsa las teclas izquierda y derecha se desplaza entre las pilas
				//Si se pula la tecla Enter se coloca sobre la pila
				//la bola superior de la pila seleccionada
				//sabemos que el color de esa bola es el 4
				//y que ocupa la posición 3
				//Si pulsa F1 o F2, simplemente aparece un mensaje
				tecla = entornoLeerTecla();
				switch (tecla) {
				case TEnter:
					if (bandera==false){
						if (!vaciaTorre(j.t,pila)){
							bolaOrigen=cimaTorre(j.t,pila);
							posOrigen=cuantosTorre(j.t,pila);
							entornoSeleccionarBola(pila,bolaOrigen);
							bandera=true;
							entornoQuitarBola(pila,posOrigen-1,bolasXPila);
							pilaorigen=pila;
						}
					}
					else{
							piladestino=pila;
							posDestino=cuantosTorre(j.t,piladestino);
							if (pilaorigen==pila){
								entornoPonerBola(pila,bolaOrigen,posOrigen-1,bolasXPila);
								entornoQuitarBolaSeleccion(pila);
								bandera=false;
							}

							else{
								if (vaciaTorre(j.t,pila)){
									desapilarTorre(j.t,pilaorigen);
									entornoQuitarBolaSeleccion(pilaorigen);
									entornoQuitarBolaSeleccion(piladestino);
									ponerValorTorre(j.t,bolaOrigen,pila);
									entornoPonerBola(pila,bolaOrigen,posDestino,bolasXPila);
									j.puntos=j.puntos-10;
									entornoPonerPuntuacion(j.puntos);
									bandera=false;
								}
								else{
									if (bolaOrigen==cimaTorre(j.t,pila)){
										desapilarTorre(j.t,pilaorigen);
										entornoQuitarBolaSeleccion(pilaorigen);
										entornoQuitarBolaSeleccion(piladestino);
										entornoQuitarBola(pilaorigen,posOrigen-1,bolasXPila);
										ponerValorTorre(j.t,bolaOrigen,pila);
										entornoPonerBola(pila,bolaOrigen,posDestino,bolasXPila);
										j.puntos=j.puntos-10;
										entornoPonerPuntuacion(j.puntos);
										bandera=false;
									}
								}

							}
					}
					if (j.puntos==0 || resuelto(j.t)==true){
						salir=true;
					}
					break;
				case TDerecha:
					entornoDesmarcarPosicion(pila);
					if (pila < (pilas+pilasSin) -1)
						pila++;
					else
						pila = 0;
					entornoMarcarPosicion(pila);
					break;
				case TIzquierda:
					entornoDesmarcarPosicion(pila);
					if (pila > 0)
						pila--;
					else
						pila = (pilas+pilasSin) - 1;
					entornoMarcarPosicion(pila);
					break;
				case TF1:
					// la ayuda solo se puede conceder una vez
					break;
				case TF2:
					entornoMostrarMensaje("Deshacer movimientos", 1);
					break;
				case TSalir:
					salir = true;
					break;
				case TNada:
					break;
				}
			}
}


void terminar (){
	entornoMostrarMensajeFin(" Fin................");
	entornoPausa(1.5);
	entornoTerminar();
}


