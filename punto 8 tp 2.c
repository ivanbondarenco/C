#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int operacion;
	int num1;
	int num2;
	int resultado;
		printf("Ingrese la operacion a realizar: siendo 1 suma, 2 resta, 3 multiplicacion, 4 división\n");
		scanf("%d", &operacion);
			printf("Ingrese el primer numero\n");
			scanf("%d", &num1);
				printf("Ingrese el segundo numero\n");
					scanf("%d", &num2);
	
	switch(operacion){
		case 1 : 
		resultado =	num1 + num2;
		break;
		case 2: 
			resultado = num1 - num2;
			break;
		case 3: 
			resultado = num1 * num2;
			break;
		case 4: 
			resultado = num1 / num2;
			break;
	}
	
	printf("El resultado de la operacion es %d\n", resultado);
}
