#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void contadores(int c1,int c2, int c3){
	printf("La cantidad de vuelos nacionales son %d,de los vuelos mercosur %d,de los vuelos internacionales %d\n",c1,c2,c3);
}

void min(int minNum){
	printf("El numero del vuelo SIN ESCALAS con menor tiempo es: %d\n",minNum);
}

int total_escalas(int tiempoF, int cantidad_escalasF, int tiempo_escalasF){
	int tiempo_total;
	int multiplicacion = tiempo_escalasF * cantidad_escalasF;
	tiempo_total = tiempoF + multiplicacion;
	return tiempo_total;
}

int main(int argc, char *argv[]) {
	int numero_vuelo;
	char destino;
	int tiempo;
	char escalas;
	int cantidad_escalas;
	char inicio[3];
	int tiempo_escalas = 60;
	int contadorN = 0;
	int contadorM = 0;
	int contadorI = 0;
	int bandera = 1;
	int tiempoMin;
	int numeroMin;	
		
		
	printf("Desea iniciar el programa? Escriba si. Si quiere finalizarlo escriba no\n");
	fflush(stdin);
	gets(inicio);
	while(strcmp(inicio, "si") == 0){
		printf("Ingrese el numero de vuelo\n");
		fflush(stdin);
		scanf("%d",&numero_vuelo);
		printf("Ingrese el destino n nacional, m mercosur, i internacional\n");
		fflush(stdin);
		scanf("\n%c",&destino);
		switch(destino){
			case 'n':
				contadorN = contadorN + 1;
				break;
			case 'm':
				 contadorM = contadorM + 1;
				 break;
			case 'i':
				contadorI = contadorI + 1;
				break;
		}
		printf("Ingrese el tiempo de vuelo estimado\n");
		fflush(stdin);
		scanf("%d", &tiempo);
		printf("Ingrese S si su vuelo tiene escalas, N si no tiene escalas\n");
		fflush(stdin);
		scanf("\n%c", &escalas);
		if(escalas == 's'){
			printf("Ingrese la cantidad de escalas\n");
			fflush(stdin);
			scanf("%d", &cantidad_escalas);
			printf("El tiempo total estimado es de %d minutos",total_escalas(tiempo,cantidad_escalas,tiempo_escalas));
			
		} else{
			if(bandera == 1){
				numeroMin = numero_vuelo;
				tiempoMin = tiempo;
				bandera = 0;
			} else if(bandera == 0 & tiempo < tiempoMin){
				numeroMin = numero_vuelo;	
			}
			printf("El numero del vuelo es %d y el tiempo estimado del vuelo es %d minutos\n",numero_vuelo,tiempo);
			tiempo_escalas = 0;
			cantidad_escalas = 0;
		}
		
	printf("Desea continuar el programa? Escriba si. Si quiere finalizarlo escriba no\n");
	fflush(stdin);
	gets(inicio);
		
		
	}
	
	contadores(contadorN, contadorM, contadorI);
	min(numeroMin);
	
	
	
	
	return 0;
}


