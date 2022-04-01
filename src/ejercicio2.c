/*
 ============================================================================
 Name        : ejercicio2.c
 Author      : Augusto
 Version     :
 Copyright   : MIT
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingrese un numero\n");
	scanf("%d",&numeroUno);

	printf("ingrese un numero\n");
	scanf("%d",&numeroDos);

	printf("Ingrese un numero\n");
	scanf("%d",&numeroTres);

	if (numeroUno > numeroDos && numeroUno > numeroTres){

		printf("El primer numero es mayor");
	}
	else{
		if (numeroDos > numeroUno && numeroDos > numeroTres)
		{
			printf("El segundo numero es mayor");

		}
		else {
				printf("El tercer numero es mayor");
		}
	}






	return EXIT_SUCCESS;
}
