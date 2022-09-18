#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float monto_expensas(char categoria_departamentoF,int uso_profesionalF,char cocheraF,float multasF){
	
	float importe;
	
	switch(categoria_departamentoF){
		case 'p':
			importe = 4000;
			break;
		case 's':
			importe = 3000;
			break;
		case 'd':
			importe = 2000;
			break;
		case 'm':
			importe = 1000;
			break;
	}
	
	if(uso_profesionalF == 1){
		importe = importe + 2500;
	}
	if(cocheraF == 's'){
		importe = importe + 1500;
	}
	
	if(multasF > 0){
		importe = importe + multasF;
	}
	
	return importe;
}

void mostrar_pantalla(int a){
	printf("La cantidad de departamentos que son de DOS AMBIENTES de uso profesional son: %d\n", a);
}

int main(int argc, char *argv[]) {

int numero_departamento, uso_profesional, contador_dosamb;
char categoria_departamento, cochera, inicio[3], multa;
float multas_convivencias = 0;

printf("Para iniciar el programa escriba si, para finalizarlo escriba NO\n");
fflush(stdin);
gets(inicio);
while(strcmp(inicio, "si") == 0){
	
	printf("Ingrese el numero del departamento\n");
	fflush(stdin);
	scanf("%d", &numero_departamento);
	printf("Ingrese la categoria del departamento\n");
	fflush(stdin);
	scanf("\n%c", &categoria_departamento);
	printf("Ingrese 1 si el uso es PROFESIONAL, 0 si es uso particular\n");
	fflush(stdin);
	scanf("%d", &uso_profesional);
	printf("Ingrese s si el departamento cuenta con cochera, n si NO cuenta con cochera\n");
	fflush(stdin);
	scanf("\n%c", &cochera);
	printf("Ingrese s si el departamento tiene multa a pagar, ingrese n si no tiene multas a pagar\n");
	fflush(stdin);
	scanf("%s", &multa);
	
	if(multa == 's'){
		printf("Ingrese la multa a pagar\n");
		fflush(stdin);
		scanf("%f", &multas_convivencias);
	}
	
	if(categoria_departamento == 'd' && uso_profesional == 1){
		contador_dosamb++;
	}
	printf("El monto total de la expensa es de : %f", monto_expensas(categoria_departamento,uso_profesional,cochera,multas_convivencias));
	system("pause");
	system("cls");
	printf("Para continuar el programa escriba si, para finalizarlo escriba no\n");
	fflush(stdin);
	gets(inicio);	
	
}	
	mostrar_pantalla(contador_dosamb);	
	return 0;
}
