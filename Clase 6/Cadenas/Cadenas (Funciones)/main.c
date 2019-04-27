#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    int largo;
    int compara;

    char nombre[6];
    char otroNombre[50]= "Jose Perez";

    printf("Ingrese su nombre: ");
    scanf("%[^\n]", nombre);
    //fgets(nombre, 50, stdin);
    //gets(nombre);
    printf("\nSu nombre es: %s\n", nombre);

    //Muestra el largo.
    largo= strlen(nombre);
    printf("El tamaño es de: %d\n", largo);

    compara= stricmp(nombre, "pepe");
    printf("%d\n", compara);

    if(compara == 0)
    {
        printf("Usted es pepe.\n");
    }

    //strcpy(nombre, otroNombre);
    strncpy(nombre, otroNombre, 5);
    printf("Su nuevo nombre es: %s\n", nombre);

    //Convierte todo en mayuscula.
    strupr(otroNombre);
    printf("Su nuevo nombre es: %s\n", otroNombre);

    //Convierte todo en mayuscula.
    strlwr(otroNombre);
    printf("Su nuevo nombre es: %s\n", otroNombre);

    //Concatenar.
    strcat(nombre, otroNombre);
    printf("Su nuevo nombre es: %s\n", nombre);

    return 0;
}
