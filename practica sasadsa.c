#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int capacidad(int calidadF, int cooperacion, int analisisF){
int potencial;
if(calidadF >= 4 && cooperacion >=4 && analisisF >=4){
	potencial = 1;
} else{
	potencial = 0;
}
return potencial; 
}

void mostrar_pantalla(int capacidadP, int codigoPantalla){
	if(capacidadP == 1){
		printf("El empleado %d TIENE CAPACIDAD DE DESARROLLO\n");
	} else if(capacidadP == 0){
		printf("El empleado NO TIENE CAPACIDAD DE DESARROLLO\n");
	}
}


int main(int argc, char *argv[]) {
	int codigo, dias;
	char profesional[3], inicio[3];
	int calidad_cantidad, cooperacion, analisis;	
	int resultado_capacidad;
	int promedio, max_cod, max_dias;
	int contador = 0;
	int bandera = 1;
	
	
	printf("Ingrese si para iniciar el programa, no para finalizarlo\n");
	fflush(stdin);
	gets(inicio);
	while(strcmp(inicio, "si") == 0){
		printf("Ingrese el codigo del empleado\n");
		fflush(stdin);
		scanf("%d", &codigo);
		printf("Ingrese los dias trabajados\n");
		fflush(stdin);
		scanf("%d",&dias);
		printf("Ingrese si para indicar que es profesional, no para indicar que no lo es\n");
		fflush(stdin);
		scanf("%s", &profesional);
		if(strcmp(profesional, "si") == 0 ){
			printf("Ingrese la capacidad de analisis y creatividad del empleado\n");
			scanf("%d", &analisis);
			} else{
				analisis = 0;
					}
		printf("Ingrese la calidad y cantidad de trabajo\n");
		fflush(stdin);
		scanf("%d",&calidad_cantidad);
		printf("Ingrese la cooperacion del empleado\n");
		fflush(stdin);
		scanf("%d", &cooperacion);
		
		if(strcmp(profesional,"si") == 0){
		resultado_capacidad = capacidad(calidad_cantidad, cooperacion, analisis);
		mostrar_pantalla(resultado_capacidad, codigo);
		}
		
		promedio = calidad_cantidad + cooperacion + analisis / 3;
		
		if(bandera == 1){
			max_cod = codigo;
			max_dias = dias;
			bandera = 0;
		} else if(bandera == 0 && dias > max_dias){
			max_cod = codigo;
		}
		
		
		if(strcmp(profesional,"si") == 0 && promedio < 3){
			contador = contador + 1;
		}
	printf("Ingrese si para continuar el programa, no para finalizarlo\n");
	fflush(stdin);
	gets(inicio);
		
		
}
printf("La cantidad de empleados profesionales fuera de nivel son: %d\n",contador);
printf("El codigo de emplead con mayor cantidad de dias trabajados son: %d\n", max_cod);
	
	
	return 0;
}
