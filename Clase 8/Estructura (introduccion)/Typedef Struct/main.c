#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[50];
    char apellido[50];
    int edad;
    int nota;

}eAlumno;


int main()
{
    eAlumno unAlumno= {"Pedro", "Gomez", 45, 7};

    printf("%d \n\n", sizeof(eAlumno));

    printf("%s -- %s -- %d --- %d \n", unAlumno.nombre, unAlumno.apellido, unAlumno.edad, unAlumno.nota);

    return 0;
}
