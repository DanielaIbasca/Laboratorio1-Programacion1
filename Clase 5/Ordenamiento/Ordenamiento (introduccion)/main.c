#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int j;
    int aux;
    int nota[10]={8,5,2,10,3};

    char usuario[][10]= {"Jose", "Maria", "Jesus", "Juan", "Gaspar"};
    char auxString[10];

    for(i=0; i<5; i++)
    {
        printf("Usuario %s Nota: %d\n", usuario[i], nota[i]);
    }

    printf("\n");

    //Criterio de ordenamiento.
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            //Comparacion de notas.
            printf("%d => %d \n",nota[i], nota[j]);
            if(nota[i] < nota[j])
            {
                aux= nota[i];
                nota[i]= nota[j];
                nota[j]= aux;

                strcpy(auxString, usuario[i]);
                strcpy(usuario[i], usuario[j]);
                strcpy(usuario[j], auxString);
            }
        }
    }

    //Muestra el aray ordenado.
    for(i=0; i<5; i++)
    {
        printf("Usuario %s Nota: %d\n", usuario[i], nota[i]);
    }

    return 0;
}
