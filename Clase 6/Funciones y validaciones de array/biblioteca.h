#include <stdio.h>
#include <stdlib.h>

/** \brief Carga el array.
 *
 * \param int[] El array.
 * \param int El tamaño del array.
 * \return void
 *
 */
void cargarArray(int[], int);


/** \brief Muestra el array.
 *
 * \param int[] El array.
 * \param int El tamaño del array.
 * \return void
 *
 */
void mostrarArray(int[], int);


/** \brief Busca un valor en el array.
 *
 * \param int[] El array.
 * \param int El tamaño del array.
 * \param int El valor a buscar.
 * \return int El indice del valor buscado.
               -1 si no lo encuentra.
 *
 */
int buscarValor(int[], int, int);
