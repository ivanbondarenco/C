#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float valorizacion(int codigo, int cantidad){
	float importe;
	float descuento;
	float importe_total;
		if(codigo == 1 && cantidad =< 50){
		importe = (2 * cantidad) * 50;
		descuento = importe * 0.1;
		importe_total  = importe - descuento;
	} else if (codigo == 1 && cantidad >= 100){
		importe = (2 * cantidad) * 50;
		descuento = importe * 0.25;
		importe_total = importe - descuento;
	} else if(codigo == 2 && cantidad =< 10){
		importe = (10 * cantidad) * 50;
		descuento = importe * 0.1;
		importe_total = importe - descuento;
	} else if(codigo == 2  && cantidad > 10){
		importe = (10 * cantidad) * 50;
		descuento = importe * 0.25;
		importe_total = importe - descuento;
	}
	else if(codigo == 3  && cantidad == 1){
		importe_total = 1 * 500;
	}
	return importe_total;
}


float mostrar_pantalla(int contador, float importe){
	printf("El numero de pedido es %d con el precio de: %f\n",contador, importe);
}


int main(int argc, char *argv[]) {
	char codigo_cliente[9];
	int codigo_producto;
	int cantidad_producto;
	int dia_entrega;
	int stock= 2000;
	char inicio[3];
	int contador_pedido = 0;
	float total;
	int contador_sabados = 0;
	int pedido_stock;
	float importe_total_pedidos = 0;
	
	printf("Desea iniciar su turno? Ingrese SI para iniciarlo, NO para finalizarlo\n");
	fflush(stdin);
	gets(inicio);
	while(strcmp(inicio, "SI") == 0){
		printf("Ingrese el codigo del cliente\n");
		fflush(stdin);
		scanf("%s", &codigo_cliente);
		printf("Ingrese el codigo del producto\n");
		fflush(stdin);
		scanf("%d", &codigo_producto);
		printf("Ingrese la cantidad del producto\n");
		fflush(stdin);
		scanf("%d", &cantidad_producto);
		if(codigo_producto == 1){
			stock = stock - 2 * cantidad_producto;
			pedido_stock = 2 * cantidad_producto;
			
		}
		else if(codigo_producto == 2){
			stock = stock - 10 * cantidad_producto;
			pedido_stock = 10 * cantidad_producto;			
		} 
	
		printf("Ingrese el dia de la entrega\n");
		fflush(stdin);
		scanf("%d", &dia_entrega);
		if(dia_entrega == 6){
			contador_sabados = contador_sabados + 1;
		}
	
total = valorizacion(codigo_producto, cantidad_producto);		
		if(stock > pedido_stock && codigo_producto == 2 || codigo_producto == 1 || codigo_producto == 3){
			contador_pedido = contador_pedido + 1;
			mostrar_pantalla(contador_pedido, total);
			importe_total_pedidos = importe_total_pedidos + total;
		} else if(stock < pedido_stock && codigo_producto == 2 || codigo_producto == 1){
			printf("No se registro el pedido\n");
		} 
		system("pause");
		system("cls");

	
	
	printf("Desea continuar su turno? Ingrese SI para iniciarlo, NO para finalizarlo\n");
	fflush(stdin);
	gets(inicio);
	}
	printf("El importe total entre los pedidos es de: %f\n", importe_total_pedidos);
	printf("La cantidad de dias de entregas los sabados son de : %d\n", contador_sabados);
}
	

