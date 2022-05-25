/*
 * censistas.h
 *
 *  Created on: 24 may. 2022
 *      Author: Santy
 */

#ifndef CENSISTAS_H_
#define CENSISTAS_H_

typedef struct {
	int legajoCensista;
	char nombre[51];
	int edad;
	char telefono[20];
} eCensista;

int cargarCensistas(eCensista *lista);
int listarCensistas(eCensista* lista,int tamanio);

#endif /* CENSISTAS_H_ */
