#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Ingrese un numero\n");
	scanf("%d", &n);
	if(n == 0){
		printf("Su numero es nulo\n");
	} else if(n < 1){
		printf("Su numero es NEGATIVO\n");
	} else {
		printf("Su numero es positivo\n");
	}

}
