#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int potencia (int base, int exponente){
		int resultado;
		resultado = pow(base, exponente);
	};

int main(int argc, char *argv[]) {
	int baseMain;
	int potenciaMain;
	printf("Ingrese una base\n");
	scanf("%d", &baseMain);
	printf("Ingrese un exponente\n");
	scanf("%d", &potenciaMain);
	
		printf("El resultado es %d\n", potencia(baseMain, potenciaMain));
		system("pause");
	return 0;
}
