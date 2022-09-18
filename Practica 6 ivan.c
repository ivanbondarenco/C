#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float viatico(float kilometros_funcion, float peajes_funcion, float comida_funcion){
	float valorKilometros;
	float total;
	if(kilometros_funcion <= 2000){
		valorKilometros = kilometros_funcion * 10;
	} else if(kilometros_funcion > 2000){
		valorKilometros = kilometros_funcion * 5;
	}
	total = valorKilometros + peajes_funcion + comida_funcion;
	return total;
}
void informar_vendedores(int a){
	printf("La cantidad de vendedores que recorrieron más de 2000 kilometros son: %d\n", a);
}

int main(int argc, char *argv[]) {
	int codigo_legajo, contador_vendedores;
	char categoria_empleado[3];
	float kilometros, gasto_peajes, gasto_comidas, anticipo = 0, monto_total;
	char inicio[3];
	
	printf("Ingrese SI, si desea iniciar el programa. Ingrese NO si desea finalizarlo.\n");
	fflush(stdin);
	gets(inicio);
	while(strcmp(inicio,"SI") == 0){
		printf("Ingrese el codigo del legajo\n");
		fflush(stdin);
		scanf("%d",&codigo_legajo);
		printf("Ingrese la categoria del empleado (v , j, g)\n");
		fflush(stdin);
		scanf("%c",&categoria_empleado);
		printf("Ingrese los kilometros recorridos\n");
		fflush(stdin);
		scanf("%f", &kilometros);
		printf("Ingrese el gasto en peajes\n");
		fflush(stdin);
		scanf("%f",&gasto_peajes);
		printf("Ingrese el gasto de comidas\n");
		fflush(stdin);
		scanf("\n%f",&gasto_comidas);	
		if(strcmp(categoria_empleado,"v") == 0){
			printf("Ingrese el anticipo\n");
			fflush(stdin);
			scanf("%f", &anticipo);
		}
			monto_total = viatico(kilometros, gasto_peajes, gasto_comidas);
			
		if((monto_total - anticipo) <= 0){
				printf("\t\tImporte a devolver por el empleado\n");
			}	else if (monto_total - anticipo >= 1){
				printf("\t\tImporte a pagar por la empresa\n");
			}
			
			
		if(strcmp(categoria_empleado,"v") == 0 && kilometros > 2000){
			contador_vendedores++;
		}
		
	system("pause");
	system("cls");
	printf("Ingrese SI, si desea continuar el programa. Ingrese NO si desea finalizarlo.\n");
	fflush(stdin);
	gets(inicio);
		
	}
	
	informar_vendedores(contador_vendedores);	
	
	
	return 0;
}
