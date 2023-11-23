/*
 * fracciones.c
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>
#include "fracciones.h"


int mcd(int n1, int n2) {
		int dividendo=n1;
		int divisor=n2;
		int resto=1;

		while(resto!=0) {
			printf("%d-%d-%d\n",dividendo, divisor, resto);
			resto=dividendo%divisor;
			dividendo=divisor;
			divisor=resto;
		}
		return dividendo;
	}

	int mcm(int n1, int n2) {
		return (n1*n2)/mcd(n1,n2);
	}

/**
	 * Pide una fraccion por teclado pasándola por referencia
	 */
	void pedirFraccion(fraccion *f) {
		puts("introduce la fracción en formato numerador/denominador: ");
		fflush(stdout);
		scanf("%d/%d", &(f->num), &(f->denom));

		simplificar(f);
	}

	/**
	 * Pide una fracción por teclado pasándola como valor de retorno
	 */
	fraccion pedirFraccion2(void){
		fraccion f;
		puts("introduce la fracción en formato numerador/denominador: ");
		fflush(stdout);
		scanf("%d/%d", &(f.num), &(f.denom));
		simplificar(&f);
		return f;
	}

	/**
	 * Muestra la fracción en pantalla
	 */
	void mostrarFraccion(fraccion f) {
		printf("%d/%d", f.num,f.denom);
	}

	/** Multiplica la fraccion f1 por la fraccion f2 y devuelve el resultado en el
	 * parámetro por referencia f3
	 *
	 */
	void multiplicar2(fraccion f1, fraccion f2, fraccion *f3){
		f3->num =  f1.num*f2.num;
		f3->denom=f1.denom*f2.denom;
		simplificar(f3);
	}

	/**
	 * Función que calcula la suma de 2 fracciones
	 */
	fraccion suma(fraccion f1, fraccion f2) {
		fraccion fres;


		fres.denom= mcm(f1.denom,f2.denom);
		fres.num = (fres.denom/f1.denom)*f1.num + (fres.denom/f2.denom)*f2.num;
		simplificar(&fres);
		return fres;
	}


	/**
	 * Función que calcula la suma de 2 fracciones
	 */
	fraccion resta(fraccion f1, fraccion f2) {
		f2.num=-f2.num;
		return suma(f1,f2);
	}



	/**
	 * Devuelve la fraccion resultante de multiplicar f1*f2
	 */
	fraccion multiplicar (fraccion f1, fraccion f2) {
		fraccion fres;
		fres.num=f1.num*f2.num;
		fres.denom=f1.denom*f2.denom;
		simplificar(&fres);
		return fres;
	}

	/**
	 * Devuelve la fraccion resultante de dividir f1*f2
	 */
	fraccion dividir (fraccion f1, fraccion f2){
		fraccion fres;
		fres.num=f1.num*f2.denom;
		fres.denom=f1.denom*f2.num;
		simplificar(&fres);
		return fres;
	}

	void simplificar(fraccion *f) {
		int m=mcd(f->num,f->denom);
		f->num=f->num/m;
		f->denom=f->denom/m;
	}



