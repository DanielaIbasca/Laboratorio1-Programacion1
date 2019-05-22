#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1


typedef struct
{
    int estado;
    float precio;
    char nombre[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
    int idProveedor;

}eProducto;


typedef struct
{
    int id;
    char descripcion[50];
    char localidad[50];
    char duenio[50];
    char cuit [50];

}eProveedor;


eProducto pedirProducto();

void inicializarProductos(eProducto[],int);

void inicializarProveedor(eProveedor[],int);

void prueba(eProveedor[],eProducto[],int);

void mostrarProducto(eProducto);

void mostrarProveedor(eProveedor);

void mostrarArrayProductos(eProducto[], int);

void mostrarArrayProveedor(eProveedor[], int);

void mostrarArrayProductosConProveedor(eProducto[], int,eProveedor[], int);

void mostrarArrayProveedorconSusProductos(eProveedor[], int,eProducto[], int);
