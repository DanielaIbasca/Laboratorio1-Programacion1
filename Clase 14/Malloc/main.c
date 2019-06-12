#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* x;

    //Busca espacio en memoria.
    x= (int*) malloc(sizeof(int));
    if(x != NULL)
    {
        *x= 7;
        printf("El valor es: %d\n", *x);
    }

    return 0;
}
