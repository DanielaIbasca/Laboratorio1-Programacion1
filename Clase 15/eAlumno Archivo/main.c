#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define ARCHIVO ".\\alumnos.csv"

typedef struct
{
    char nombre[50];
    int legajo;
    int nota;
    int estado;

} eAlumno;


int main()
{
    FILE *pArchivo;
    eAlumno unAlumno;
    if((pArchivo = fopen(ARCHIVO, "w"))==NULL)
    {
        printf("No se puedo leer.\n");
        exit(1);
    }
    else
    {
        printf("se puedo.\n");
    }

    unAlumno.legajo = 1;
    unAlumno.nota = 4;
    strcpy(unAlumno.nombre, "Juan");
    fflush(stdin);

    char texto[]="Lalala,555,10";
    int largo = strlen(texto);
    fwrite(texto, sizeof(char),largo,pArchivo);
    fclose(pArchivo);

    if ((pArchivo=fopen(ARCHIVO,"r"))==NULL)
    {
        printf("el archivo no puede ser abierto.\n");
        exit(1);
    }
    else
    {
        char renglon[70];
        while(!feof(pArchivo))
        {
            int cantidad = fread(renglon,sizeof(char),70,pArchivo);
            printf("cantidad %d y texto %s \n", cantidad, texto);
        }
    }

    return 0;

}
