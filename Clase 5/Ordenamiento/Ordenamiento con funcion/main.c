#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int datos[], int tam);

int main()
{
    int i;
    int j;
    int aux;
    int nota[10]= {8,5,2,10,3};

    char usuario[][10]= {"Jose", "Maria", "Jesus", "Juan", "Gaspar"};
    char auxString[10];

    mostrarVector(nota, 5);

    for(i=0; i<5; i++)
    {
        printf("Ingrese usuario: #%d ",i+1);
        //gets(usuario[i]);
        fflush(stdin);
        scanf("%s", usuario[i]);
        printf("Ingrese nota: #%d ",i+1);
        scanf("%d", &nota[i]);
    }

    printf("\n");

    //Criterio de ordenamiento.
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            //Comparacion de notas.
            printf("%d => %d \n",nota[i], nota[j]);

            //Comparacion de palabras.
            if(strcmp(usuario[i], usuario[j]) == 1)
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

void mostrarVector(int datos[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Nota: %d\n", datos[i]);
    }
}
