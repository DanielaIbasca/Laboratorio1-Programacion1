#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Tarea.h"

#define T 10


int main()
{
    int i;
    char opcion;

    eProducto listadoProductos[T];
    eProveedor listadoProveedores[T];

    inicializarProductos(listadoProductos,T);
    inicializarProveedor(listadoProveedores,3);


    do
    {
        printf("MENU:\n");
        printf("(1) Listar productos.\n");
        printf("(2) Listar proveedores.\n");
        printf("(3) Listar productos con proveedores.\n");
        printf("(4) Listar proveedores con sus productos.\n");
        printf("(5) Salir\n\n");

        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);

        while (opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5')
        {
            printf("Error. Intente nuevamente.\n\n");
            printf("Elija una opcion: ");
            fflush(stdin);
            scanf("%c", &opcion);
        }

        switch (opcion)
        {
        case '1':
            printf("\n\n      PRODUCTO      CODIGO \t FECHA \t      PRECIO      ID\n");
            mostrarArrayProductos(listadoProductos,T);
            printf("\n\n\n");
            break;


        case '2':
            printf("\n\nID  DESCRIPCION    LOCALIDAD      DUENIO   CUIT\n");
            mostrarArrayProveedor(listadoProveedores,3);
            printf("\n\n\n");
            break;


        case '3':
            mostrarArrayProductosConProveedor(listadoProductos,T,listadoProveedores,3);
            printf("\n\n\n");
            break;


        case '4':
            mostrarArrayProveedorconSusProductos(listadoProveedores,3,listadoProductos,T);
            printf("\n\n\n");
            break;


        case '5':
            opcion= '5';
            printf("\nSaliendo...\n\n");
            break;


        default:
            printf("Error. Intente nuevamente.\n\n");

        }

        system("pause");
        system("cls");

    }
    while (opcion != '5');

    return 0;
}
