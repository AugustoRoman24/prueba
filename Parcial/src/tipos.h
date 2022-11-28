

#ifndef TIPOS_H_
#define TIPOS_H_

typedef struct {
	int id;
	char descripcion[30];
}Tipo;


/*
 * @brief inicializa la lista con los tipos hardcodeados
 * @param lista de tipos hardcodeados
 *
 */
void inicializarListaTipo(Tipo listaTipo[]);


/*
 * @brief muestra la lista de tipos
 * @param lista de tipos
 */
void mostrarListaTipo(Tipo listaTipo[]);
#endif /* TIPOS_H_ */
