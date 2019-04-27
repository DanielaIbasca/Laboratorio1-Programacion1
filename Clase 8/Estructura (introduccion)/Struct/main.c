#include <stdio.h>
#include <stdlib.h>

struct eAlumno
{
    char nombre[50];
    char apellido[50];
    int edad;
    int nota;
};

int main()
{
    struct eAlumno unAlumno;

    printf("%d \n", sizeof(struct eAlumno));

    return 0;
}
