#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int tamanio;

    int nota[10];
    char usuario[10][10];

    for(i=0; i<10; i++)
    {
        //usuario[i][0]= " ";
        strcpy(usuario[i], "");
        nota[i]= 0;
    }

    printf("Test %s\n", usuario[0]);
    printf("%Test s\n", usuario[1]);

    for(i=0; i<10; i++)
    {
        printf("Helo %s Nota: %d\n", usuario[i], nota[i]);
    }

    return 0;
}
