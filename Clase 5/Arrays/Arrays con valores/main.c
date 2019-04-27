#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int nota[10]={8,5,2,10,3};
    char usuario[10][10];

    //inicializacion de arrays en paralelo.
    for(i=0; i<5; i++)
    {
        strcpy(usuario[i], "");
        //nota[i]= 0;
    }

    //carga secuencial de arrays en paralelo.
    for(i=0;i<5; i++)
    {
        printf("Ingrese usuario # %d: ", i+1);
        scanf("%s", usuario[i]);
        /*
        printf("\nIngrese nota # %d: ", i+1);
        scanf("%d\n", &nota[i]);
        */
    }

    for(i=0; i<5; i++)
    {
        printf("\nUsuario %s Nota: %d", usuario[i], nota[i]);
    }

    printf("\n");

    return 0;
}
