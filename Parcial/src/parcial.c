#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"
#include "tipos.h"
#include "vehiculo.h"
#include "tipos.h"
#include "hojaServicio.h"
#define L 5

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int retorno;
	int flagAlta = -1;
	int opcionModificar;
	int flagModificar = -1;

	Tipo listaTipo[L];
	Vehiculo vehiculo[L];
	Servicio servicio[L];
	inicializarVehiculos(vehiculo, L);
	inicializarListaTipo(listaTipo, L);
	inicializarHojaServicio(servicio,L);

	do {
		if (utn_getNumero(&opcion,
				"\n1-Alta Vehiculo\n2-Modificar vehiculo\n3-Baja vehiculo\n4-Listar vehiculos\n5-Listar tipos\n6-Alta hoja de servicio\n7-Listar hoja de servicios\n8-Informes\n9-Salir\n\nIngrese una opcion: ",
				"\nError ingrese una opcion valida\n", 1, 11, 50) == 0) {
		}

		switch (opcion) {
		case 1:
			retorno = altaVehiculos(vehiculo, L, listaTipo);
			if (retorno != -1) {
				printf("\nSe dio de alta exitosamente");
				flagAlta = 1;
			}

			break;
		}
		case 2:
		if (flagAlta == 1) {
			if (utn_getNumero(&opcionModificar,
					"\nQue desea modificar?\n1-descripcion\n2-precioServicio",
					"\nError ingrese una opcion valida", 1, 2, 500) == 0) {
			}
			if (opcionModificar == 1) {
				retorno = modificarDescripcion(vehiculo, listaTipo);
				if (retorno == 1) {
					printf("\nSe modifico exitosamente");
					flagModificar = 1;
				} else {
					printf("\nNo se pudo realizar la modificacion");
				}

			}
			else {
				retorno = modificarPrecioVehiculo(vehiculo, L, listaTipo);
				if (retorno == 1) {
					printf("\n se modifico el precio exitosamente");
					flagModificar = 1;
				} else {
					printf("\nNo se pudo realizar la modificacion");
				}
			}
		}
		else {
			printf("\nSe debe poder dar de alta antes de poder modificar");
		}
		break;
		case 3:
			if(flagModificar == 1){
				retorno = bajaVehiculo(vehiculo, L, listaTipo);

				if(retorno == 1){
					printf("\nSe dio de baja exitosamente");
				}
				else{
					printf("\nNo se pudo realizar la baja");
				}
			}
			else{
				printf("\nDebe dar de alta antes de poder dar de baja");
			}
			break;
		case 4 :
			if(flagAlta == 1 ){
			mostrarListaVehiculos(vehiculo, L, listaTipo);
			}
			else {
				printf("\nSe debe dar de alta antes de mostrar este listado");
			}
			break;
		case 5:
			mostrarListaTipos(listaTipo);
			break;
		case 6:
			retorno = altaHojaServicio(servicio,L,vehiculo);
			break;
		case 7:
			listarServicio(servicio);
			break;
		case 8:
			break;
	} while (opcion != 9);
	return EXIT_SUCCESS;
}

