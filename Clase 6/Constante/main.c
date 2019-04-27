#include <stdio.h>
#include <stdlib.h>

int const LARGO = 5;
void mostrarArray(int[]);

int main()
{
    int miArray[LARGO];

    mostrarArray(miArray);

    return 0;
}

void mostrarArray(int array[])
{
    int i;
    for(i=0; i<LARGO; i++)
    {
        printf("%d \n", array[i]);
    }
}
