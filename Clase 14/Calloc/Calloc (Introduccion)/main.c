#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* x;

    //Inicializa en 0.
    x= (int*) calloc(sizeof(int), 1);
    if(x != NULL)
    {
        printf("El valor es: %d\n", *x);
    }

    return 0;
}
