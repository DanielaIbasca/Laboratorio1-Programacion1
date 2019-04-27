#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT 4

int main()
{
    int i;

    char nombre[CANT][50]= {"Maria", "Juan", "Alex", "Joel"};
    char apellido[CANT][50]= {"Gomez", "Gonzales", "Perez", "Rojas"};
    int edad[CANT]= {18,20,22,24};
    int nota[CANT]= {2,4,7,10};

    for(i=0; i<CANT; i++)
    {
        if(nombre[i] != -1)
        {
            printf("Nombre: %s \t Apellido: %5s\n", nombre[i], apellido[i]);
        }
    }

    return 0;
}
