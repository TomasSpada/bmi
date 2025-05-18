#include <stdio.h>

int main()
{
    int peso;
    float altura;
    float resultado;
    printf("Ingrese su peso en kilogramos:"); 
    scanf("%d", &peso);
    printf("Ingrese su altura en metros:");
    scanf("%f", &altura);

    resultado= peso/(altura*altura);
    printf("Su índice de masa corporal es %.1f \n",resultado);
    printf("Índice| Condición \n----------------------------- \n<18.5 | Bajo peso \n18.5 a 24.9 | Normal \n25.0 a 29.9 | Sobrepeso \n>=30| Obesidad");

    return 0;
}
