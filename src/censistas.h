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


/// @fn int cargarCensistas(eCensista*)
/// @brief carga los censistas hardcodeados
///
/// @param lista
/// @return
int cargarCensistas(eCensista *lista);


/// @fn int listarCensistas(eCensista*, int)
/// @brief muestra los censistas
///
/// @param lista
/// @param tamanio
/// @return
int listarCensistas(eCensista* lista,int tamanio);

#endif /* CENSISTAS_H_ */
