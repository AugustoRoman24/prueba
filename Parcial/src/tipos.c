#include <stdio.h>
#include <string.h>
#include "tipos.h"
#include "inputs.h"



void inicializarListaTipo(Tipo listaTipo[]){

		Tipo auxiliar[3] =  {{1000, "Sedan 3 Ptas"}, {1001, "Sedan 5ptas"}, {1002, "camioneta"}};

		for(int i = 0; i < 4 ; i++){
			listaTipo[i] = auxiliar[i];
		}
}

void mostrarListaTipo(Tipo listaTipo[]){

	for (int i = 0; i < 4; i++){
		printf("\nID: %d   Descripcion: %s", listaTipo[i].id, listaTipo[i].descripcion);
	}
}
