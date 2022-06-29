
#include "LinkedList.h"

#ifndef INFORMES_H_
#define INFORMES_H_



#endif /* INFORMES_H_ */

/**
 * @fn int controller_showOptionMenuFilter()
 * @brief muestra un menu de opciones para el filtrado de peliculas
 *
 * @return
 */
int showOptionMenuFilter();


/**
 * @fn int filterByTerrorGenre(void*)
 * @brief filtra a las peliculas por genero de terror
 *
 * @param pElement
 * @return
 */
int filterByTerrorGenre(void* pElement);

/**
 * @fn int filterByComediaGenre(void*)
 * @brief filtra a las peliculas por genero de comedia
 *
 * @param pElement
 * @return
 */
int filterByComediaGenre(void* pElement);

/**
 * @fn int filterByAccionGenre(void*)
 * @brief filtra a las peliculas por el genero accion
 *
 * @param pElement
 * @return
 */
int filterByAccionGenre(void* pElement);

/**
 * @fn int filterByDramaGenre(void*)
 * @brief filtra a las peliculas por el genero drama
 *
 * @param pElement
 * @return
 */
int filterByDramaGenre(void* pElement);
