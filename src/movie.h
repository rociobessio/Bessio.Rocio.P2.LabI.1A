

#ifndef MOVIE_H_
#define MOVIE_H_

typedef struct{

	int id;
	char title[80];
	char genero[25];
	float rating;

}eMovie;

#endif /* MOVIE_H_ */

//CONSTRUCTORES
/**
 * @fn eMovie Movie_new*()
 * @brief pide espacion en la memoria dinamica
 *
 * @return
 */
eMovie* Movie_new();

/**
 * @fn eMovie Movie_newParametros*(char*, char*, char*, char*)
 * @brief crea una nueva pelicula parametrizada, recibe todos los miembros de la
 * 		  estructura en forma de str
 *
 * @param idStr
 * @param titleStr
 * @param generoStr
 * @param ratingStr
 * @return
 */
eMovie* Movie_newParametros(char* idStr,char* titleStr,char* generoStr,char* ratingStr);

//DESTRUCTOR
/**
 * @fn void Movie_delete(eMovie*)
 * @brief elimina a una movie de la memoria
 *
 * @param this
 */
void Movie_delete(eMovie* this);

//SETTERS
/**
 * @fn int Movie_setTitle(eMovie*, char*)
 * @brief settea el titulo de la pelicula
 *
 * @param this
 * @param title
 * @return
 */
int Movie_setTitle(eMovie* this,char* title);

/**
 * @fn int Movie_setRating(eMovie*, float)
 * @brief settea el rating de la pelicula
 *
 * @param this
 * @param rating
 * @return
 */
int Movie_setRating(eMovie* this,float rating);

/**
 * @fn int Movie_setGenero(eMovie*, char*)
 * @brief settea el genero de la pelicula
 *
 * @param this
 * @param genero
 * @return
 */
int Movie_setGenero(eMovie* this,char* genero);

/**
 * @fn int Movie_setId(eMovie*, int)
 * @brief settea el id de la pelicula
 *
 * @param this
 * @param id
 * @return
 */
int Movie_setId(eMovie* this,int id);


//GETTERS
/**
 * @fn int Movie_getTitle(eMovie*, char*)
 * @brief obtiene el titulo de la pelicula
 *
 * @param this
 * @param title
 * @return
 */
int Movie_getTitle(eMovie* this,char* title);

/**
 * @fn int Movie_getId(eMovie*, int*)
 * @brief obtiene el id de la pelicula
 *
 * @param this
 * @param id
 * @return
 */
int Movie_getId(eMovie* this,int* id);

/**
 * @fn int Movie_getRating(eMovie*, float*)
 * @brief obtiene el rating de la pelicula
 *
 * @param this
 * @param rating
 * @return
 */
int Movie_getRating(eMovie* this,float* rating);

/**
 * @fn int Movie_getHigherId(eMovie*, int*)
 * @brief obtiene la id mas alta de la lista
 *
 * @param this
 * @param id
 * @return
 */
int Movie_getHigherId(eMovie* this,int* id);

/**
 * @fn int Movie_getGenero(eMovie*, char*)
 * @brief obtiene el genero de la pelicula
 *
 * @param this
 * @param genero
 * @return
 */
int Movie_getGenero(eMovie* this,char* genero);



//OTROS
/**
 * @fn int Movie_ShowOnlyOne(eMovie*)
 * @brief muestra a una unica pelicula
 *
 * @param eMovie
 * @return
 */
int Movie_ShowOnlyOne(eMovie *eMovie);

//SORT
/**
 * @fn int Movie_sortByGenero(void*, void*)
 * @brief compara el genero de las peliculas para ordenarlas
 *
 * @param genero1
 * @param genero2
 * @return
 */
int Movie_sortByGenero(void* genero1,void* genero2);

/**
 * @fn int Movie_sortByRating(void*, void*)
 * @brief compara el rating de las peliculas para ordenarlas
 *
 * @param rating1
 * @param rating2
 * @return
 */
int Movie_sortByRating(void* rating1,void* rating2);

