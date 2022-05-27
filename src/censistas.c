/*
 * cencistas.c
 *
 *  Created on: 24 may. 2022
 *      Author: Santy
 */

#include "censistas.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "viviendas.h"
#include "input.h"

int cargarCensistas(eCensista *lista) {
	lista[0].legajoCensista = 100;
	lista[1].legajoCensista = 101;
	lista[2].legajoCensista = 102;
	strcpy(lista[0].nombre, "Ana");
	strcpy(lista[1].nombre, "Juan");
	strcpy(lista[2].nombre, "Sol");
	lista[0].edad = 34;
	lista[1].edad = 24;
	lista[2].edad = 47;
	strcpy(lista[0].telefono, "1203-2345");
	strcpy(lista[1].telefono, "43015-4678");
	strcpy(lista[2].telefono, "5902-37487");
	return 0;
}
int listarCensistas(eCensista *lista, int tamanio) {
	int i;
	printf("\nlos censistas son:\n"
			"Legajo: \tNombre: \tEdad: \t\tTelefono:\n\n");
	for (i = 0; i < tamanio; i++) {
		printf("%d \t\t%s \t\t%d \t\t%s\n", lista[i].legajoCensista,
				lista[i].nombre, lista[i].edad, lista[i].telefono);
	}
	return 0;
}
int censistasMasCensos(eCensista *lista, eVivienda *listaDos, int tamanio) {
	int contadorCien = 0;
	int contadorCientoUno = 0;
	int contadorCientoDos = 0;
	int i;

	for (i = 0; i < tamanio; i++) {
		if (listaDos[i].isEmpty != -1) {
			switch (listaDos[i].legajoCensista) {
			case 100:
				contadorCien++;
				break;
			case 101:
				contadorCientoUno++;
				break;
			case 102:
				contadorCientoDos++;
				break;
			}
		}
	}
	if (contadorCien > contadorCientoUno && contadorCien > contadorCientoDos) {
		printf("El censista con mas viviendas censadas es : %s",
				lista[0].nombre);
	} else {
		if (contadorCientoUno > contadorCien
				&& contadorCientoUno > contadorCientoDos) {
			printf("El censista con mas viviendas censadas es: %s",
					lista[1].nombre);
		} else {
			if (contadorCientoDos > contadorCien
					&& contadorCientoDos > contadorCientoUno) {
				printf("El censista con mas viviendas censadas es: %s",
						lista[2].nombre);
			} else {
				if (contadorCien == contadorCientoUno) {
					printf(
							"El o los censistas con mas viviendas censadas son: %s,%s",
							lista[0].nombre, lista[1].nombre);
				} else {
					if (contadorCien == contadorCientoDos) {
						printf(
								"El o los censistas con mas viviendas censadas son: %s,%s",
								lista[1].nombre, lista[2].nombre);
					} else {
						if (contadorCientoDos == contadorCientoUno) {
							printf(
									"El o los censistas con mas viviendas censadas son: %s,%s",
									lista[2].nombre, lista[1].nombre);
						}
					}

				}
			}
		}
	}
	return 0;
}

