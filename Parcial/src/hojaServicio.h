#ifndef HOJASERVICIO_H_
#define HOJASERVICIO_H_
#include "vehiculo.h"
typedef struct{
	int idHoja;
	int idVehiculo;
	char descripcion[30];
	float precioServicio;

}Servicio;

void inicializarHojaServicio(Servicio servicio[], int sizeServicio);
int altaHojaServicio(Servicio servicio[], int sizeServicio, Vehiculo vehiculo[]);
void listarServicio(Servicio servicio [], int sizeServicio);


#endif /* HOJASERVICIO_H_ */
