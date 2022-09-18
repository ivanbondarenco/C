#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Se solicita efectuar el siguiente programa para movimientos de stock de dos almacenes.  Almac�n1 (resmas=5000), Almacen2 (T�ner=3000). Dentro de los stock se pueden realizar donsoperaciones ingreso(Aumenta el stock) o Egreso(Disminuye el Stock). 
El usuario debe ingresar Almac�n 1 o 2, operaci�n (i=ingreso/e=egreso),  cantidad (que ingresara o se sacara dependiendo la operaci�n).
Calculo:
El operador debe elegir una almac�n y un tipo de movimiento, tambi�n debe ingresa la cantidad, y en base a la operaci�n restarle o sumarle la cantidad de stock dejando el stock actualizado un ejemplo de ingreso seria:  1	i	150	
Realizar una funci�n que pase por referencia : el numero de almac�n, la operaci�n, la cantidad , el stock, y devuelva el stock actualizado.
Cargar 4 vectores donde en el primero se guarden solo los n�meros de almac�n, otro donde guarde la operaci�n, otro donde guarde la cantidad, otro donde guarde la variaciones de stock. Realizarlo con funciones y pasaje por referencia. Usar aritm�tica de punteros.
Antes de finalizar el programa el programa debe guardar a trav�s de una funci�n donde pase los 4 vectores cargados y los grave en un archivo de texto en el siguiente orden:
Almac�n	operaci�n	cantidad	Stock
 Por �ltimo debe abrir el archivo ya guardado, recorrerlo y mostrar los resultados cargados, utilizar funciones.

*/
int stockF(int almacenF, char operacionF[2], int cantidadF, int stockF){
	int stock_actualizado;
	if(almacenF == 1 && strcmp(operacionF,"i") == 0){
		stock_actualizado = stockF + cantidadF; 
	} else if(almacenF == 1 && strcmp(operacionF,"e") == 0){
		stock_actualizado = stockF - cantidadF;
	} 
	else if(almacenF == 2 && strcmp(operacionF,"i") == 0){
		stock_actualizado = stockF + cantidadF;
	} else if(almacenF == 2 && strcmp(operacionF,"e") == 0){
		stock_actualizado = stockF - cantidadF;
	}
	return stock_actualizado;
}

int main(int argc, char *argv[]) {
	int almacen, stock ;
	char operacion[2];
	int cantidad;
	char inicio[2];
	
	printf("Ingrese si para iniciar el programa, no para finalizarlo\n ");
	fflush(stdin);
	gets(inicio);
	while(strcmp(inicio, "si") == 0){
	printf("Ingrese el almacen en el que quiere hacer un movimiento 1 o 2\n");
	fflush(stdin);
	scanf("%d", &almacen);
	if(almacen == 1){
		stock = 5000;
	} else if (almacen == 2){
		stock = 3000;
	}
	printf("Ingrese la operacion que desea realizar i (ingreso) o e (egreso)\n");
	fflush(stdin);
	scanf("%s", operacion);
	printf("Ingrese la cantidad\n");
	fflush(stdin);
	scanf("%d", cantidad);
	printf("El stock actualizado es de %d\n:", stockF(almacen, operacion, cantidad, stock) );
	
		printf("Ingrese si para continuar el programa, no para finalizarlo\n ");
	fflush(stdin);
	gets(inicio);
}
	return 0;

}
