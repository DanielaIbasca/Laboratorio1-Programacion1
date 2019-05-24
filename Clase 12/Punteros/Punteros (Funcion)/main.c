#include <stdio.h>
#include <stdlib.h>

void mostrarLetra(char*);

int main()
{
    char letra;
    char* pLetra= NULL;

    pLetra= &letra;

    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c", pLetra);

    mostrarLetra(pLetra);

    return 0;
}


void mostrarLetra(char* pLetra)
{
    if(pLetra != NULL)
    {
        printf("\nLa letra ingresada es: %c\n", *pLetra);
    }
}
