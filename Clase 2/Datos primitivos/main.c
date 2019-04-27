#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;

    printf("Ingrese un nuemro: ");
    scanf("%d", &numero);

    printf("Ingrese una letra: ");
    fflush(stdin); //setbuf(stdin, NULL);
    scanf("%c", &letra);

    printf("\nEl numero es: %d\n", numero);
    printf("La letra es: %c\n\n", letra);

    system("pause");

    return 0;
}
