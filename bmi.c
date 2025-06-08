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
	
	resultado = peso/(altura*altura);
	printf("Su índice de masa corporal es %.1f \n",resultado);
	printf("indice | Condición\n");
	printf("-----------------------------\n");
	printf("<18.5  | Bajo peso\n");
	printf("18.5 a 24.9  | Normal\n");
	printf("25.0 a 29.9  | Sobrepeso\n");
	printf(">=30   | Obesidad\n\n");
	
	if (resultado < 18.5) {
		printf("Usted tiene un peso inferior al normal.\n");
	} else if (resultado >= 18.5 && resultado <= 24.9) {
		printf("Usted tiene un peso normal.\n");
	} else if (resultado > 24.9 && resultado <= 29.9) {
		printf("Usted tiene sobrepeso.\n");
	} else {
		printf("Usted presenta obesidad.\n");
	}
	
	return 0;
}
