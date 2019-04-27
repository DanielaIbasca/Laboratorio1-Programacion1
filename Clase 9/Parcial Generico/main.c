#include <stdio.h>
#include <stdlib.h>

#include "Gen_FBasic.h"

#define A 100

int main()
{

    printf(" PARCIAL GENERICO. \n\n");
    system("pause");
    system("cls");

    int comprobarInicializacion;

    eGenerica lista[A];
    comprobarInicializacion = generica_init(lista, A);

    if (comprobarInicializacion == 0)
    {
        printf("::::::::::::::::::::::::::::::::::::::::\n");
        printf("Todos los estados se han inicializado.");
        printf("\n::::::::::::::::::::::::::::::::::::::::\n\n\n");
    }
    else
    {
        printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("Ha ocurrido un error al inicializar estados.\n\n\n");
        printf(":::::::::::::::::::::::::::::::::::::::::::::\n\n\n");
    }


    generica_inicializarEmployeesConDatos(lista, A);

    system("pause");
    system("cls");


    char opcion;

    do
    {
        printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("SOLO SE TOMARA EL PRIMER DIGITO COMO OPCION.\n");
        printf("::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("(1) \n");
        printf("(2) \n");
        printf("(3) \n");
        printf("(4) \n");
        printf("(5) \n");
        printf("(6) \n");
        printf("(7) Salir\n");

        printf("Debe elegir una opcion a realizar: ");
        fflush(stdin);
        scanf("%c", &opcion);

        while (opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5' && opcion!='6' && opcion!='7')
        {
            printf("Error. Ha ingresado una opcion erronea!\n\n");
            printf("Debe elegir una opcion a realizar: ");
            fflush(stdin);
            scanf("%c", &opcion);
        }

        switch (opcion)
        {
        case '1':
            generica_mostrarTodos(lista, A);
            break;

        case '2':
            generica_add(lista, A);
            break;

        case '3':
            break;

        case '4':
            break;

        case '5':
            break;

        case '6':
            break;

        case '7':
            break;

        default:
            printf("Error. Ha ingresado una opcion erronea!\n\n");
        }

        system("pause");
        system("cls");
    }
    while (opcion!='7');

    return 0;
}
