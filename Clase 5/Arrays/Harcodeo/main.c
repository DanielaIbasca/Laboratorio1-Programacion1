#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int nota[10]={8,5,2,10,3};
    char usuario[][10]= {"Jose", "Maria", "Jesus", "Juan", "Gaspar"};

    for(i=0; i<5; i++)
    {
        printf("\nUsuario %s Nota: %d", usuario[i], nota[i]);
    }

    printf("\n");

    return 0;
}
