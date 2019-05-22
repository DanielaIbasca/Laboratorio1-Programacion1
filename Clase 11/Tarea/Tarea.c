#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Tarea.h"


eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}


void mostrarProducto(eProducto unProducto)
{
    printf("\n%14s %10s %15s %10.2f %6d", unProducto.nombre, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.idProveedor);
}


void mostrarProveedor(eProveedor unProveedor)
{
    printf("\n%d %10s %15s %10s %5s", unProveedor.id, unProveedor.descripcion, unProveedor.localidad, unProveedor.duenio, unProveedor.cuit);
}


void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}


void mostrarArrayProductos(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        mostrarProducto(listado[i]);
    }
}


void mostrarArrayProveedor(eProveedor listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        mostrarProveedor(listado[i]);
    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


void inicializarProductos(eProducto listaProductos[],int tam)
{

    int i;

    int idProveedor[10]={1,2,3,1,2,3,1,2,3,1};
    char nombre[10][50]={"Infinia","Axion power","V-Power","Infinia diesel","Axion disel","V-Power diesel","Super","Axion super","Normal","Querosene"};
    char codigoDeBarra[10][50]={"465","687","321","466","487","684","487","632","123","399"};
    char fechaDeVencimiento[10][50]={"1/1/2020","1/2/2020","1/3/2020","1/4/2020","1/5/2020","1/6/2020","1/7/2020","1/8/2020","1/9/2020","1/10/2020"};
    float precio[10]={42,43,44,40,41,42,35,36,37,38};

    for(i=0;i<10;i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].idProveedor=idProveedor[i];
        listaProductos[i].estado = OCUPADO;
    }

}


void inicializarProveedor(eProveedor listaProveedor[],int tam)
{
    int i;

    int id[3]={1,2,3};
    char cuit[3][50]={"444","555","666"};
    char duenio[3][50]={"YPF","Axion","Shell"};
    char descripcion[3][50]={"Petrolera","Petrolera","Petrolera"};
    char localidad[3][50]={"Avellaneda","Bahia blanca","Rio negro"};

    for(i=0;i<3;i++)
    {
        listaProveedor[i].id=id[i];
        strcpy(listaProveedor[i].cuit,cuit[i]);
        strcpy(listaProveedor[i].duenio,duenio[i]);
        strcpy(listaProveedor[i].descripcion,descripcion[i]);
        strcpy(listaProveedor[i].localidad,localidad[i]);

    }
}


void mostrarArrayProductosConProveedor(eProducto listaProductos[], int tamprod,eProveedor listaProveedores[], int tamprov)
{
    int i;
    int j;

    for(i=0; i<tamprod; i++)
    {
        mostrarProducto(listaProductos[i]);
        for(j=0; j<tamprov; j++)
        {
            if( listaProductos[i].idProveedor == listaProveedores[j].id )
            {
                mostrarProveedor(listaProveedores[j]);
            }
        }

    }
}


void mostrarArrayProveedorconSusProductos(eProveedor listaProveedores[], int tamprov,eProducto listaProductos[], int tamprod)
{
    int i;
    int j;
    for(i=0; i<tamprov; i++)
    {
        mostrarProveedor(listaProveedores[i]);

        for(j=0; j<tamprod; j++)
        {
            if(listaProveedores[i].id ==listaProductos[j].idProveedor)
            {
                mostrarProducto(listaProductos[j]);
            }
        }

    }
}
