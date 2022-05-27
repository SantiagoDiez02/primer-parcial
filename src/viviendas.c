/*
 * operaciones.c
 *
 *  Created on: 23 may. 2022
 *      Author: Santy
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "input.h"
#include "viviendas.h"

#include "censistas.h"

#define VACIO -1
int inicializarArray(eVivienda *lista, int tamanio) {
	int i = 0;

	for (; i < tamanio; i++) {
		lista[i].isEmpty = VACIO;
	}

	return 0;
}
int cargarArray(eVivienda *lista, int tamanio, int idVivienda, char calle[25],
		int cantidadPersonas, int cantidadHabitaciones, int tipoVivienda,
		int legajoCensista) {
	int i = 0;
	for (; i < tamanio; i++) {
		if (lista[i].isEmpty == VACIO) {
			lista[i].isEmpty = 0;
			lista[i].idVivienda = idVivienda;
			strcpy(lista[i].calle, calle);
			lista[i].cantidadPersonas = cantidadPersonas;
			lista[i].cantidadHabitaciones = cantidadHabitaciones;
			lista[i].tipoVivienda = tipoVivienda;
			lista[i].legajoCensista = legajoCensista;

			printf("\n\tSU ID ES: %d\n", idVivienda);

			i = tamanio + 1;
		}

	}
	return 0;
}
int mostrarId(eVivienda *lista, int tamanio) {

	int i;

	printf("Las ID son: \n");

	for (i = 0; i < tamanio; i++) {
		if (lista[i].isEmpty != -1) {
			printf("%d\n", lista[i].idVivienda);
		} else {
			break;
		}
	}

	return 0;
}
int encontrarId(eVivienda *lista, int tamanio, int idVivienda) {
	int i;
	int posicionADevolver;
	posicionADevolver = -1;
	for (i = 0; i < tamanio; i++) {
		if (lista[i].idVivienda == idVivienda) {
			posicionADevolver = i;
			i = tamanio + 1;
		}

	}

	return posicionADevolver;
}
int borrarVivienda(eVivienda *lista, int tamanio, int idVivienda) {
	int posicionAVaciar = -1;
	int retorno = 0;
	posicionAVaciar = encontrarId(lista, tamanio, idVivienda);

	if (posicionAVaciar == -1) {
		retorno = -1;
	}

	lista[posicionAVaciar].isEmpty = -1;

	return retorno;

}
int ordenarViviendas(eVivienda *lista, int tamanio) {
	int i;
	int j;

	eVivienda listaAux;

	for (i = 0; i < tamanio; i++) {
		for (j = i + 1; j < tamanio; j++) {

			if (lista[j].isEmpty != -1) {

				if (strcmp(lista[i].calle, lista[j].calle) == 1) {
					listaAux = lista[i];
					lista[i] = lista[j];
					lista[j] = listaAux;
				} else {
					if (strcmp(lista[i].calle, lista[j].calle) == 0) {
						if (lista[i].cantidadPersonas
								< lista[j].cantidadPersonas) {
							listaAux = lista[i];
							lista[i] = lista[j];
							lista[j] = listaAux;
						}
					}
				}

			}
		}
	}

	return 0;
}
int listarViviendasYCensistas(eVivienda *lista, eCensista *listaDos,
		int tamanio) {
	int i;
	printf(
			"\nlas viviendas son:\n"
					"ID: \tCalle: \tCantidad de Personas: Cantidad de Habitaciones: Tipo de Vivienda: Legajo de Censista:\n\n");
	for (i = 0; i < tamanio; i++) {
		if (lista[i].isEmpty != -1) {
			printf("%d \t %s \t\t\t%d \t\t\t%d \t\t%d \t\t%d\n",
					lista[i].idVivienda, lista[i].calle,
					lista[i].cantidadPersonas, lista[i].cantidadHabitaciones,
					lista[i].tipoVivienda, lista[i].legajoCensista);

			if (lista[i].legajoCensista == 100) {
				printf("%d \t\t%s \t\t%d \t\t%s\n", listaDos[0].legajoCensista,
						listaDos[0].nombre, listaDos[0].edad,
						listaDos[0].telefono);
			} else {
				if (lista[i].legajoCensista == 101) {
					printf("%d \t\t%s \t\t%d \t\t%s\n",
							listaDos[1].legajoCensista, listaDos[1].nombre,
							listaDos[1].edad, listaDos[1].telefono);
				} else {
					printf("%d \t\t%s \t\t%d \t\t%s\n",
							listaDos[2].legajoCensista, listaDos[2].nombre,
							listaDos[2].edad, listaDos[2].telefono);
				}
			}
		} else {
			break;
		}
	}

	return 0;
}

