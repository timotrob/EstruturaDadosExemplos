#include "stats.h"
#include <math.h>

double soma_array(double valores[], int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++)
    {
        soma += valores[i];
    }
    return soma;
}

double calc_media(double valores[],int n)
{
    double soma = soma_array(valores,n);
    double media = soma/n;
    return media;
}

double calc_variancia(double valores[],int n)
{
    double media = calc_media(valores, n);
    double soma_var = 0.0;
    for (int i = 0; i < n ; i++)
    {
        soma_var += pow((media - valores[i]), 2);
    }
    double variancia = soma_var / (n - 1);
    return variancia;
}

double calc_desvio_padrao(double valores[],int n)
{
   double variancia=  calc_variancia(valores, n);
   double dp = sqrt(variancia);
   return dp;
}

void run_stats()
{
    //Números
    double numeros[] = { 2.0,3.0,4.0,5.0 };
    //Quantidade
    int n = sizeof(numeros) / sizeof(double);
    //Média
    double media = calc_media(numeros,n);
    double variancia = calc_variancia(numeros,n);
    double dp = calc_desvio_padrao(numeros,n);
    //Variância

}
