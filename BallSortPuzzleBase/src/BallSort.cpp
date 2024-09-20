//============================================================================
// Name        : BallSort.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : curso 20/21
// Copyright   : Your copyright notice
// Description : Ejemplo de uso del entorno gráfico para el juego BallSortPuzzle
//============================================================================


#include "TADJuego.h"
#include "prueba_TPila.h"
#include "prueba_TTablero.h"
int main() {
	pr_pruebas_pila();
	pr_pruebasTorres();
	TJuego j;
	iniciar(j);
	BallSort(j);
	terminar();
	return 0;
}
