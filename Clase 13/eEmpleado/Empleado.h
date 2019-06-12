
typedef struct
{
    int legajo;
    char nombre[50];
    float sueldo;

}eEmpleado;


eEmpleado* nuevoEmpleado();

eEmpleado* fantasma(int, char*, float);

eEmpleado* nuevoEmpleadoParametros(int, char*, float);

int mostrarEmpleado(eEmpleado*);

int setLegajo(eEmpleado*, int);

int getLegajo(eEmpleado*);

void destructorEmpleado(eEmpleado*);
