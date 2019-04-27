#include <stdio.h>
#include <stdlib.h>

int esUnNumero(char*);

int main()
{
    char palabra[10];

    int indice= 0;
    int esNumero;

    scanf("%s", &palabra);
    fflush(stdin);
    printf("Dato ingresado: %s\n\n", palabra);

    esNumero= esUnNumero(palabra);
    if(esNumero == 1)
    {
        printf("Es correcto.");
    }
    else
    {
        printf("Es incorrecto.");
    }

    return 0;
}


int esUnNumero(char* cadena)
{
    int indice= 0;
    int retorno= 0;

    while(cadena[indice] != '\0')
    {
        if(cadena[indice] < '\0' || cadena[indice] > '9')
        {
            break;
        }
        else
        {
            indice++;
        }
    }

    if(cadena[indice] == '\0')
    {
        retorno= 1;
    }

    return retorno;
}
