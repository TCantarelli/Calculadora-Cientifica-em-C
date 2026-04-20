#ifndef __EXPOENTE_H
#define __EXPOENTE_H
double potencia(int a, int b)
{
    double resultado = 1;
    for(int i =0; i<b; i++)
    {
        resultado *=a;
    }
    return(resultado);
}

#endif // __EXPOENTE_H
