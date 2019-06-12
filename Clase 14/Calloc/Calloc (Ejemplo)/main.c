#include <stdio.h>
#include <stdlib.h>

#define T 5

int main()
{
    int i;
    int* x;

    x= (int*) calloc(sizeof(int), T);

    if(x != NULL)
    {
        for(i=0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", (x+i));
        }

        for(i=0; i<T; i++)
        {
            printf("%d\n", *(x+i));
        }
    }

    return 0;
}
