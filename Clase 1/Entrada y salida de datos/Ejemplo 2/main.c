#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float altura;

    printf("\nIngrese su edad: ");
    scanf("%d", &edad);
    printf("\nIngrese su altura: ");
    scanf("%f", &altura);

    printf("\nEdad: \t Altura: \n");
    printf("%d %14f \n", edad, altura);

    return 0;
}
