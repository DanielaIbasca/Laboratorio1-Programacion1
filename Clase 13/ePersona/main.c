#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idPersona;
    char nombre[50];
    int edad;
    int estado;
} ePersona;


int main()
{
    int i;
    char opcion;

    ePersona *pArrayPersona;

    printf("La direccion es: %p", &pArrayPersona);

    pArrayPersona= malloc(sizeof(ePersona));

    if(pArrayPersona == NULL)
    {
        printf("No hay lugar en memoria.\n");
        exit(0);
    }

    printf("\nLa direccion es: %p \n", &pArrayPersona);

    return 0;
}
