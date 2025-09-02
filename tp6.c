#include <stdio.h>
#include <math.h>
float calcularAreaRectangulo (float longitud, float altura){
	return longitud * altura;
}
float calcularPerimetroRectangulo (float longitud, float altura){
	return 2 *(longitud + altura);
}
float calcularDiagonalRectangulo (float longitud, float altura){
	return sqrt(pow(longitud, 2) + pow(altura, 2));
}
float calcularAreaCirculo (float radio){
	return 3.14 * pow(radio, 2);
}
float calcularPerimetroCirculo (float radio){
	return 2 * 3.14 * radio;
}
void imprimirResultados (float area, float perimetro){
	printf("el area es: %.2f\n", area);
	printf("el perimetro es: %.2f\n", perimetro);
}

int main(int argc, char *argv[]) {
	int figura;
	float longitud,altura,radio,area,perimetro,diagonal;
	do{
	printf("ingrese la figura que desea calcular (1:rectangulo | 2:circulo): ");
	scanf("%d", &figura);
	}while(figura < 1 || figura > 2);
	
	switch (figura){
	case 1:
		printf("---------Opcion de rectangulo seleccionada---------\n");
		printf("ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		printf("ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		area=calcularAreaRectangulo(altura,longitud);
		perimetro=calcularPerimetroRectangulo(altura,longitud);
		diagonal=calcularDiagonalRectangulo(altura,longitud);
		
		imprimirResultados(area,perimetro);
		printf("la diagonal es: %.2f\n", diagonal);
		break;
	
	case 2:
		printf("---------Opcion de circulo seleccionada---------\n");
		printf("ingrese el radio del circulo: ");
		scanf("%f", &radio);
		
		area=calcularAreaCirculo(radio);
		perimetro=calcularPerimetroCirculo(radio);
		
		imprimirResultados(area,perimetro);
		break;
	
	default:
		printf("como llegaste aqui?");
		break;
	
}
	return 0;
}
