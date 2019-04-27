
int cambiarValor(int valor)
{
    valor= 999;
    return 1;

}


int cambiarValorReferencia(int* valor)
{
    printf("El valor es: %d\n", *valor);
    *valor= 999;
    return 1;
}
