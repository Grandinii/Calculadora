/******************************************************************************

Gui. Grandini - 16/02/2023

*******************************************************************************/
#include <stdio.h>


// 1

int soma(int a, int b)
{
 return a + b;   
}
int subtracao(int a, int b)
{
    return a - b;
}
int divisao(int a, int b)
{
    return a / b;
}
int prod(int a, int b)
{
    return a * b;
}

// 2

int main()
{
    // Entrada
    int a=10, b=2
    
    , soma, subtracao, divisao, prod;
    
    // Processamento
    soma = a + b;
    subtracao = a - b;
    divisao = a / b;
    prod = a * b;
    
    // Saida
    printf("soma %d", soma);
    printf("\nsubtracao %d", subtracao);
    printf("\ndivisao %d", divisao);
    printf("\nprod %d", prod);
    
}
