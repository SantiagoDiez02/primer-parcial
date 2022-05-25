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

/// @fn int cargarArray(eVivienda*, int, int, char[], int, int, int, int)
/// @brief carga el array con los datos ingresados en el main
///
/// @param lista
/// @param tamanio
/// @param idVivienda
/// @param calle
/// @param cantidadPersonas
/// @param cantidadHabitaciones
/// @param tipoVivienda
/// @param legajoCensista
/// @return
int cargarArray(eVivienda *lista, int tamanio, int idVivienda, char calle[25],
		int cantidadPersonas, int cantidadHabitaciones, int tipoVivienda,
		int legajoCensista);
/// @fn int inicializarArray(eVivienda*, int)
/// @brief inicializa todos los espacios del array en VACIO
///
/// @param lista
/// @param tamanio
/// @return
int inicializarArray(eVivienda *lista, int tamanio);
/// @fn int mostrarId(eVivienda*, int)
/// @brief muestra todos los is existentes
///
/// @param lista
/// @param tamanio
/// @return
int mostrarId(eVivienda *lista, int tamanio);
/// @fn int encontrarId(eVivienda*, int, int)
/// @brief busca el id pedido en el main y su posicion
///
/// @param lista
/// @param tamanio
/// @param idVivienda
/// @return en caso de encontrarlo devuelve la posicion de ese id, en caso de no hacerlo devuelve -1
int encontrarId(eVivienda *lista, int tamanio, int idVivienda);
/// @fn int borrarVivienda(eVivienda*, int, int)
/// @brief busca la posicion del id pedido en el main y establece su estado a VACIO
///
/// @param lista
/// @param tamanio
/// @param idVivienda
/// @return en caso de borrarlo devuelve 0, en caso de no hacerlo devuelve -1
int borrarVivienda(eVivienda *lista,int tamanio,int idVivienda);
/// @fn int ordenarViviendas(eVivienda*, int)
/// @brief ordena las viviendas segun sus calles, en caso de igualdad segun su cantidad de personas
///
/// @param lista
/// @param tamanio
/// @return
int ordenarViviendas(eVivienda *lista, int tamanio);
/// @fn int listarViviendas(eVivienda*, int)
/// @brief muestra todas las viviendas existentes
///
/// @param lista
/// @param tamanio
/// @return
int listarViviendas(eVivienda *lista,int tamanio);

#endif /* VIVIENDAS_H_ */
