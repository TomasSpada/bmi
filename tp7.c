#include <stdio.h>
#define TAM 3
	
int main(void) {
	int posMax, posMin, cod[TAM];
	float max, min, precio[TAM];

	printf("ingrese %d productos, se solicitara el codigo y precio:\n\n",TAM);
	for(int i=0;i<TAM;i++){
		printf("------------- producto %d -------------\n",i+1);
		do{
		printf("ingrese el codigo de barras (1-999999999): ");
		scanf("%d",&cod[i]);
			if (cod[i] < 1 || cod[i] > 999999999) {
				printf("Error. El código de barras debe estar entre 1 y 999999999\n");
			}
		}while(cod[i]<1 || cod[i]> 999999999);
		do{
		printf("ingrese el precio : ");
		scanf("%f",&precio[i]);
			if (precio[i] < 0){
			printf("Error. El precio debe ser positivo\n");
			}
	    }while(precio[i]<0);
	}
	
	max = precio[0];
	min = precio[0];
	for (int i=1 ; i<TAM ; i++){
		if(precio[i] > max){
			max = precio[i];
			posMax = i;
		}
		if(precio[i] < min){
			min = precio[i];
			posMin = i;
		}
	}
	
	printf("\n  codigo%16s\n","precio");
	for(int i=0;i<TAM;i++){
		printf("  %d %18.2f\n",cod[i],precio[i]);
	}
	
	printf("\n mas caro:[%d] %.2f \n",cod[posMax], max);
	printf(" mas barato:[%d] %.2f\n",cod[posMin], min);
	
	return 0;
}

