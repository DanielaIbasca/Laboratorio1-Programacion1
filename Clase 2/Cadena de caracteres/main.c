#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[10];

    printf("Ingrese una palabra: ");
    fflush(stdin);
    scanf("%s", palabra);

    printf("La palabra es: %s\n\n", palabra);
    system("pause");

    return 0;
}
