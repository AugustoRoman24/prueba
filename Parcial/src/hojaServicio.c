#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "HojaServicio.h"
#include "inputs.h"
#include "vehiculo.h"
#include "tipos.h"
void inicializarHojaServicio(Servicio servicio[], int sizeServicio){
	for (int i = 0; i < sizeServicio; i++){
		servicio[i].idHoja = 20000;
	}
}

int altaHojaServicio(Servicio servicio[], int sizeServicio, Vehiculo vehiculo[]){
	int retorno = -1;
	int index;
				if(vehiculo[index].idVehiculo == 0){
					mostrarListaTipo();
					if(utn_getNumero(&servicio[index].idVehiculo,"\nIngrese ID del Tipo del vehiculo","\nERROR, Ingrese un ID valido",999,1002,500)== 0){}
				}
			do {
				printf("\nIngresar salario: ");
			}while(validarFloat("%f",&servicio[index].precioServicio));
				pedirCadena(servicio[index].descripcion,"\nIngrese su descripcion");






	return retorno;
}
void listarServicio(Servicio servicio [], int sizeServicio){
	for (int i= 0; i < sizeServicio; i++){
		printf("\nID: %d  Precio: %.2f  Descripcion: %s");
	}
}
