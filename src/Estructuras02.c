/*
 ============================================================================
 Name        : Estructuras02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fracciones.h"


int main(void) {

	int opcion;
	fraccion f1, f2, f3;
	do{
		puts("\nCalculadora de fracciones");

		puts("1. Introducir fracciones.");
		puts("2. Mostrear Fracciones");
		puts("3. Sumar fracciones");
		puts("4. Restar fracciones");
		puts("5. Multiplicar fracciones");
		puts("6. Dividir fracciones");
		puts("0. Salir");
		puts("Introduce una acción(0-6):");
		fflush(stdout);
		scanf("%d", &opcion);

		switch(opcion) {
		case 1:
			puts("introduce la fracción 1");
			pedirFraccion(&f1);
			puts("introduce la fracción 2");
			f2=pedirFraccion2();
			break;
		case 2:
			printf("\nTus fracciones son ");
			mostrarFraccion(f1);
			printf(" y ");
			mostrarFraccion(f2);
			printf("\n");
			break;
		case 3:
			f3=suma(f1,f2);
			printf("\nLa suma es ");
			mostrarFraccion(f3);
			break;
		case 4:
			f3=resta(f1,f2);
			printf("\nLa resta es ");
			mostrarFraccion(f3);
			break;
		case 5:
			multiplicar2(f1,f2,&f3);
			printf("\nLa multiplicacion es ");
			mostrarFraccion(f3);
			break;
		case 6:
			f3=dividir(f1,f2);
			printf("\nLa división es ");
			mostrarFraccion(f3);
			break;
		}
	}while(opcion!=0);

	return EXIT_SUCCESS;
}
