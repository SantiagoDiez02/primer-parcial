/*
 * operaciones.h
 *
 *  Created on: 23 may. 2022
 *      Author: Santy
 */

#ifndef VIVIENDAS_H_
#define VIVIENDAS_H_

typedef struct {
	int idVivienda;
	char calle[25];
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda;
	int legajoCensista;
	int isEmpty;
} eVivienda;


int cargarArray(eVivienda *lista, int tamanio, int idVivienda, char calle[25],
		int cantidadPersonas, int cantidadHabitaciones, int tipoVivienda,
		int legajoCensista);
int inicializarArray(eVivienda *lista, int tamanio);
int mostrarId(eVivienda *lista, int tamanio);
int encontrarId(eVivienda *lista, int tamanio, int idVivienda);
int borrarVivienda(eVivienda *lista,int tamanio,int idVivienda);
int ordenarViviendas(eVivienda *lista, int tamanio);
int listarViviendas(eVivienda *lista,int tamanio);

#endif /* VIVIENDAS_H_ */
