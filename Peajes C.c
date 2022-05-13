#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float peaje(float baseFuncion, int diaFuncion, char horarioFuncion){
	float importe;	
		if(diaFuncion >= 1 && diaFuncion <=5 && horarioFuncion == 'a'){
			importe =  baseFuncion + (baseFuncion * 0.20);
		} else if(diaFuncion >= 1 && diaFuncion <= 5 && horarioFuncion == 'b'){
			importe = baseFuncion - (baseFuncion * 0.20);
		} else if(diaFuncion == 6 || diaFuncion == 7 && horarioFuncion == 'a' || horarioFuncion == 'b'){
			importe = baseFuncion - (baseFuncion * 0.20);
		} 
	return importe;
		
	}
		
float vueltoFuncion(float plata, float cobrar){
		float vueltoTotal = plata - cobrar;
		return vueltoTotal;
}

void limpiarEinformar(float plata, float devuelto){
				system("cls");
				printf("El importe a cobrar es %f\n", plata );
				printf("El vuelto es %f\n", devuelto);
}

 int main(int argc, char *argv[]) {
 	char categoria[100];
	char horario;
	int diaSemana;
 	char inicio[2];
 	int contadorAuto = 0;
 	float base;
 	int horarioAEntero;
 	float pago;
 	int pasesVendidos = 0;
 	float totalRecaudado = 0;
 	
 	
	printf("Ingrese SI, si quiere iniciar el programa. Escriba NO si es lo contrario\n");
	fflush(stdin);
	gets(inicio);

	
	while(strcmp(inicio, "SI") == 0){
		
			printf("\nIngrese la categoria del vehiculo\n");
		scanf("%s", &categoria);

	
		printf("Ingrese el horario A (PICO), B (NO PICO)\n");
		scanf("\n%c", &horario); 
		
		
			printf("Ingrese el dia de la semana (NUMERO DEL 1 AL 7)\n");
		scanf("%d", &diaSemana);		
		
		
		printf("Ingrese el importe a pagar\n");
		scanf("%f", &pago);
		
	
		if(strcmp(categoria, "auto") ==  0 & horario == 'a'){
			contadorAuto = contadorAuto + 1;		}
			
			
		
		if(strcmp(categoria,"moto") == 0){
			base = 5;
		} else if(strcmp(categoria, "auto") == 0){
			base = 10;
		} else if(strcmp(categoria, "camioneta") == 0){
			base = 15;
		} else if(strcmp(categoria, "camion") == 0){
			base = 20;
		}
			

	float cobrar =	peaje(base, diaSemana, horario);	
	float devuelto = vueltoFuncion(pago, cobrar);	
	
	pasesVendidos = pasesVendidos + 1;
	totalRecaudado = totalRecaudado + cobrar;

	limpiarEinformar(cobrar, devuelto);	
		
printf("\nIngrese SI, si quiere continuar el programa. Escriba NO si desea finalizarlo\n");
fflush(stdin);
gets(inicio);	
}

printf("La cantidad de ventas de autos en horario pico es de : %d\n", contadorAuto);
	printf("El total de pases vendidos es de : %d\n", pasesVendidos);
	printf("El total recaudado es de: %f\n", totalRecaudado);


	 }
