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
    printf("su BMI es de %.1f \n",resultado);
    
    if(resultado < 18.5){
        printf("Usted tiene un peso inferior al normal");
    }
    else if (resultado < 24.9){
         printf("Usted tiene un peso normal");
    }
    else if (resultado < 29.9){
         printf("Usted tiene sobrepeso");
    }
    else{
         printf("Usted presenta obesidad");
    }

    return 0;
}
