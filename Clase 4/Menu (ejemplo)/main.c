#include <stdio.h>
#include <stdlib.h>

int pedirOpcionMenu(char[]);

int main()
{
    int opcion;
    char seguir= 's';

    do
    {
        opcion= pedirOpcionMenu("(1) Alta.\n(2) Baja.\n(3) Modificacion.\n(4) Informes.\n(5) Salir.\nIngrese una opcion: ");

        switch(opcion)
        {
        case 1:
            printf("\nEstoy dando de alta.\n\n");
            break;

        case 2:
            printf("\nEstoy dando de baja.\n\n");
            break;

        case 3:
            printf("\nEstoy modificando.\n\n");
            break;

        case 4:
            printf("\nEstoy informando.\n\n");
            break;

        case 5:
            seguir= 'n';
            printf("\nSaliendo...\n\n");
            break;

        default:
            printf("\nElija una opcion correcta.\n\n");
            break;
        }

        system("pause");
        system("cls");
    }
    while(seguir == 's');

    return 0;
}


int pedirOpcionMenu(char texto[])
{
    int opcion;

    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}
