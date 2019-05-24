#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char* pLetra= NULL;

    pLetra= &letra;

    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c", pLetra);

    printf("\nLa letra es: %c \n", letra);

    return 0;
}
