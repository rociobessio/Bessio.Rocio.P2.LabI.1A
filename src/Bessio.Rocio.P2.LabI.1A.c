/*
 ============================================================================
 Name        : 1A.c
 Alumna      : BESSIO ROCIO
 Division    : 1A
 Fecha       : 29/06
 Parcial     : SEGUNDO PARCIAL
 Materia     : LABORATORIO 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utn.h"
#include "LinkedList.h"
#include "controller.h"

#define STATE_FILE_OPEN 1
#define STATE_FILE_CLOSED 0

int menu();

void pFunction(char* messageError1,char* messageError2,char* messageSucess,int* flag,int flagValue,
				LinkedList* array,int(*pFunction)(LinkedList*));

int menu()
{
	int opcion;

	printf("\n__________________________________________________________________________");
	printf("\n                                                                          |");
	printf("\n                       BIENVENIDO A                                       |\n");
	printf("__________________________________________________________________________|\n");
	printf("______________________________________________________________________");
	printf("\n|1)CARGAR ARCHIVO EN MODO TEXTO                                       |\n|"
			"2)IMPRIMIR LISTA                                                     |\n|"
			"3)ASIGNAR TIEMPOS                                                    |\n|"
			"4)FILTRAR POR TIPO                                                   |\n|"
			"5)MOSTRAR DURACIONES                                                 |\n|"
			"6)GUARDAR ARCHIVO EN MODO TEXTO                                      |\n|"
			"7)EXIT APP                                                           |\n");
	printf("|_____________________________________________________________________|");
	utn_getNumero(&opcion, "\nINGRESA UNA OPCION: ", "\n[VALOR INVALIDO, REINTENTA.] ", 1, 7, 10);
	return opcion;
}

void pFunction(char* messageError1,char* messageError2,char* messageSucess,int* flag,int flagValue,
				LinkedList* array,int(*pFunction)(LinkedList*)){
	int flagForCompare = *flag;

	if(flagForCompare==flagValue)
	{
		printf("\n%s\n",messageError1);
	}else
	{
		if (!pFunction(array))
		{
			printf("\n%s\n",messageError2);
		}
		else
		{
			printf("\n%s\n",messageSucess);
		}
	}
}


int main(void) {
	setbuf(stdout,NULL);

	srand(time(NULL));//semilla

	char opcion = 'n';
	//int fileState = 0;
	//int generated = 0;
	//char path[8000];

	LinkedList* listaPrincipal = ll_newLinkedList(); //creo nueva lista

	if(listaPrincipal!=NULL)
	{
		if(ll_isEmpty(listaPrincipal)){//se verifica que la lista este vacia...
	   	    printf("\n[LISTA INICIALIZADA]");
	    }

		do
		{
			switch(menu())
			{
				case 1://CARGAR ARCHIVO DE TEXTO
				/*	limpioPantalla();
					getValidStringAlpha("\nINGRESA EL NOMBRE DEL ARCHIVO: ", "\n[VALORES INVALIDOS, REINTENTA]: ", path, 3, 30);
					if(controller_loadFromText(path, listaPrincipal) == 1)
					{
						printf("\nEL ARCHIVO FUE ABIERTO DE MANERA EXITOSA!\n");
						fileState = 1;
					}
					else
					{
						printf("\nOCURRIO UN ERROR AL INTENTAR ABRIR EL ARCHIVO!\n");
					}*/
					system("Pause");
				break;
				case 2://LISTAR LISTA CON VALORES CON 0s
					limpioPantalla();
				/*	pFunction("\nPRIMERO DEBES DE CARGAR EL ARCHIVO!",
							"\nOCURRIO UN ERROR AL INTENTAR MOSTRAR LA LISTA, REINTENTA! ",
							"\nLA LISTA FUE MOSTRADA EXITOSAMENTE!",
							&fileState, STATE_FILE_CLOSED, listaPrincipal, controller_ListMovies);*/
					system("Pause");
				break;
				case 3://MAPPEAR VALORES
				/*	if(fileState == 1)
				 	 {
				 	 	listaPrincipal = ll_map(listaPrincipal, controller_CalcularTiempo);
						if(listaPrincipal!=NULL)
						{
							controller_ListMovies(listaPrincipal);
							generated = 1;
						}
						else
						{
							printf("\nOCURRIO UN ERROR AL INTENTAR MAPPEAR LA LISTA!");
						}
				 	 }
				 	 else
				 	 {
				 	 	 printf("\nPRIMERO DEBES DE CARGAR EL ARCHIVO!");
				 	 }*/
					system("Pause");
				break;
				case 4://FILTRAR POR TIPO DE MOVIE
					limpioPantalla();
				/*	if(generated==1 || generated == 2)
					{
						pFunction("\nPRIMERO DEBES DE CARGAR EL ARCHIVO!",
								"\nOCURRIO UN ERROR AL INTENTAR FILTRAR LA LISTA, REINTENTA! ",
								"\nLA LISTA FUE FILTRADA EXITOSAMENTE!",
								&fileState, STATE_FILE_CLOSED, listaPrincipal, controller_filterByType);
					}
					else
					{
						printf("\nPRIMERO DEBES DE MAPPEAR LA LISTA\n");
					}*/
					system("Pause");
				break;
				case 5://SORT, ascendente de menor a mayor, descendente de mayor a menor...
				/*	if(generated==0)
					{
						printf("\nPRIMERO DEBES DE MAPPEAR LA LISTA!\n");
					}
					else
					{
						if(listaPrincipal!=NULL)
						{
							ll_sortBy2Func(listaPrincipal, Movies_sortByStrGenre, Movies_sortByDuration, 1);
							if(listaPrincipal!=NULL)
							{
								controller_ListMovies(listaPrincipal);
								generated =2;
								printf("\nLA LISTA FUE SWAPPEADA EXITOSAMENTE!\n");
							}
						}
					}*/
					system("Pause");
				break;
				case 6://Guardar posiciones: Se deberá guardar el listado del punto anterior en un archivo de texto.
					limpioPantalla();
				/*	if(fileState==1 && generated==2)
					{
						if(!controller_saveAsText("Ordenada.txt", listaPrincipal))
						{
							fileState = 0;
							printf("\nEL ARCHIVO FUE GUARDADO Y CERRADO CON EXITO!\n");
						}
						else
						{
							printf("\nOCURRIO UN ERROR AL INTENTAR GUARDAR EL ARCHIVO!\n");
						}
					}
					else if(fileState==0)
					{
						printf("\nPRIMERO DEBES DE CARGAR EL ARCHIVO!\n");
					}
					else
					{
						printf("\nDEBES DE GENERAR LA LISTA SWAPPEADA PARA PODER GUARDAR EL ARHIVO!\n");
					}*/
					system("Pause");
				break;
				case 7://SALIR DE LA APP
					limpioPantalla();
				/*	if(fileState!=0)
					{
						printf("\nANTES DE SALIR DEBES DE GUARDAR EL ARCHIVO!\n");
					}
					else
					{
						getUserConfirmation(&opcion, "\nDESEA CERRAR LA APLICACION (S/N)?: ", "\nVALORES INVALIDOS, REINTENTA (S/N)!: ");
						if(opcion=='s')
						{
							printf("DECIDIO CERRAR LA APLICACION.....\n");
							//ll_deleteLinkedList(listaPrincipal);//borro la lista
						}
						else
						{
							printf("DECIDIO SEGUIR USANDO LA APLICACION!\n");
						}
					}*/
					system("Pause");
				break;
			}
		}while(opcion!='s');
	}

	return EXIT_SUCCESS;
}
