#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    char nombre[6];

    printf("Ingrese su nombre: ");
    scanf("%[^\n]", nombre);
    //fgets(nombre, 50, stdin);
    //gets(nombre);

    printf("\nSu nombre es: %s\n", nombre);

    return 0;
}
