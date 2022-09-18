#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calculadora(char operacionCalculadora[2],float numero1,float numero2){
	float resultado;
	if(strcmp(operacionCalculadora, "s") == 0){
		resultado = numero1 + numero2;
	} else if(strcmp(operacionCalculadora, "r") == 0){
		resultado = numero1 - numero2;
	} else if(strcmp(operacionCalculadora, "m") == 0){
		resultado = numero1 * numero2;
	} else if (strcmp(operacionCalculadora, "d") == 0){
		resultado = numero1 / numero2;
	}
	return resultado;
	}

void pantalla(float r){
	printf("El resultado de la operacion es : %f\n", r);
}


int main(int argc, char *argv[]) {
	float num1;
	float num2;
	char operacion[2];
	char inicio[3];
	float resultadoMain;
		
	printf("Ingrese SI para iniciar el programa, NO para finalizarla\n");
	fflush(stdin);
	gets(inicio);
	while(strcmp(inicio, "SI") == 0){
	
	printf("Ingrese el tipo de operacion que desea realizar\n");
	fflush(stdin);
	scanf("%s", &operacion);
	printf("Ingrese el numero 1 a operar\n");
	fflush(stdin);
	scanf("%f", &num1);
	printf("Ingrese el numero 2 a operar\n");
	fflush(stdin);
	scanf("%f", &num2);
	
	resultadoMain = calculadora(operacion,num1,num2);
	
	pantalla(resultadoMain);
	
	system("pause");
	system("cls");
	printf("Ingrese SI si quiere continuar el programa, NO para finalizarlo\n");
	fflush(stdin);
	gets(inicio);
}
	return 0;
}
