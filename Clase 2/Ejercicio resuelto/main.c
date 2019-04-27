#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("INFORMES:\n");
    printf("Solo se ingresan numeros enteros.\n");
    printf("Los numeros tienen que estar entre -500 y 500.\n\n");

    system("pause");
    system("cls");

    int numero;
    int promedio;
    int maximo= 0;
    int minimo= 0;
    int limite= 0;
    int diferencia;
    int primera= 0;
    int contador= 0;
    int sumaPositivos= 0 ;
    int sumaNegativos= 0 ;
    int cantidadCeros= 0 ;
    int cantidadNegativos= 0 ;
    int cantidadPositivos= 0 ;
    int cantidadNumerosPares= 0 ;

    char respuesta= 's' ;

    do
    {
        printf("Ingrese un numero menor a 500 y mayor a -500: ");
        scanf("%d", &numero);

        if(numero > 0)
        {
            sumaPositivos= sumaPositivos + numero;
            contador++;
        }
        else
        {
            sumaNegativos= sumaNegativos + numero;
        }

        //CONTADOR DE POSITIVOS Y NEGATIVOS.
        if(numero > 0)
        {
            cantidadPositivos++;
        }
        else if(numero < 0)
        {
            cantidadNegativos++;
        }
        else
        {
            cantidadCeros++;
        }

        //CONTADOR DE PARES.
        if(numero%2==0 && numero!=0)
        {
            cantidadNumerosPares++;
        }

        //MAXIMO Y MINIMO.
        if(primera)
        {
            primera= 1;
            maximo= numero;
            minimo= numero;
        }
        else
        {
            if(numero > maximo)
            {
                maximo= numero;
            }
            else if(numero < minimo)
            {
                minimo= numero;
            }
        }

        //CONTADOR DE NUMEROS ENTRE -239 Y 5.
        if(numero>= -239 && numero<= 5)
        {
            limite++;
        }

        printf("Desea ingresar mas numeros S (para si) - N(para no)? ");
        fflush(stdin);
        scanf("%c", &respuesta);

        promedio= sumaPositivos/contador;
        diferencia= sumaNegativos - sumaPositivos;

    }
    while (respuesta == 's');

    printf("\n\nINFORMES:");
    printf("\n(A)La cantidad de numeros pares es: %d", cantidadNumerosPares);
    printf("\n(B)La cantidad de positivos es: %d", cantidadPositivos);
    printf("\n(C)La cantidad de negativos es: %d", cantidadNegativos);
    printf("\n(D)La cantidad de ceros es: %d", cantidadCeros);
    printf("\n(E)El promedio de los numeros positivos es: %d", promedio);
    printf("\n(F)El maximo es: %d\n   El minimo es: %d", maximo, minimo);
    printf("\n(G)La suma total de negativos es: %d", sumaNegativos);
    printf("\n(H)La diferencia entre negativos y positivos es: %d", diferencia);
    printf("\n(I)La cantidad de numeros entre -239 y 5 es: %d\n\n", limite);

    return 0;
}
