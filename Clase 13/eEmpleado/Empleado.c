#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Empleado.h"


eEmpleado* nuevoEmpleado()
{
    eEmpleado* retornoEmpleado;
    retornoEmpleado= (eEmpleado*) calloc(sizeof(eEmpleado),1);
    return retornoEmpleado;
}


int mostrarEmpleado(eEmpleado* unEmpleado)
{
    int isNull= 1;

    if(unEmpleado != NULL)
    {
        printf("%d--%s--%.2f", unEmpleado->legajo, unEmpleado->nombre, unEmpleado->sueldo);
        isNull= 0;
    }
    return isNull;
}


eEmpleado* nuevoEmpleadoParametros(int legajo, char* nombre, float sueldo)
{
    eEmpleado* retornoEmpleado;
    retornoEmpleado= nuevoEmpleado();

    if(retornoEmpleado != NULL)
    {
        setLegajo(retornoEmpleado, legajo);
        strcpy(retornoEmpleado->nombre, nombre);
        retornoEmpleado->sueldo= sueldo;
    }

    return retornoEmpleado;
}


int setLegajo(eEmpleado* pEmpleado, int legajo)
{
    int esCorrecto= 0;
    if(pEmpleado != NULL && legajo >= 1000)
    {
        pEmpleado->legajo= legajo;
        esCorrecto= 1;
    }
}


int getLegajo(eEmpleado* pEmpleado)
{
    int retornoLegajo= 0;
    if(pEmpleado != NULL)
    {
        retornoLegajo= pEmpleado->legajo;
    }

    return retornoLegajo;
}


void destructorEmpleado(eEmpleado* pEmpleado)
{
    if(pEmpleado != NULL)
    {
        free(pEmpleado);
    }
}


eEmpleado* fantasma(int legajo, char* nombre, float sueldo)
{
    eEmpleado empleado;

    empleado.legajo= legajo;
    strcpy(empleado.nombre, nombre);
    empleado.sueldo= sueldo;

    return &empleado;
}
