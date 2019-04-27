int dividir(int numero)
{
    int respuesta;
    int resultado;

    respuesta= distintoACero(numero);
    if(respuesta == 1)
    {
        resultado= numero/2;
    }

    return respuesta;
}


int distintoACero(int numero)
{
    if(numero != 0)
    {
        return 1;
    }
    return 0;
}


int factorial(int numero)
{
    int respusta;

    if(numero == 1)
    {
        return 1;
    }
    respusta= numero*factorial(numero - 1);

    return respusta;
}
