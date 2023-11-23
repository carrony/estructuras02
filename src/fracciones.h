/*
 * fracciones.h
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#ifndef FRACCIONES_H_
#define FRACCIONES_H_


	typedef struct {
		int num;
		int denom;
	}  fraccion;

	int mcd(int n1, int n2);

	/**
	 * Pide una fraccion por teclado pasándola por referencia
	 */
	void pedirFraccion(fraccion *f);

	/**
	 * Pide una fracción por teclado pasándola como valor de retorno
	 */
	fraccion pedirFraccion2(void);

	/**
	 * Muestra la fracción en pantalla
	 */
	void mostrarFraccion(fraccion f);

	/** Multiplica la fraccion f1 por la fraccion f2 y devuelve el resultado en el
	 * parámetro por referencia f3
	 *
	 */
	void multiplicar2(fraccion f1, fraccion f2, fraccion *f3);


	/**
	 * Función que calcula la suma de 2 fracciones
	 */
	fraccion suma(fraccion f1, fraccion f2);


	/**
	 * Función que calcula la suma de 2 fracciones
	 */
	fraccion resta(fraccion f1, fraccion f2);

	/**
	 * Devuelve la fraccion resultante de multiplicar f1*f2
	 */
	fraccion multiplicar (fraccion f1, fraccion f2);

	/**
	 * Devuelve la fraccion resultante de dividir f1*f2
	 */
	fraccion dividir (fraccion f1, fraccion f2);

	/**
	 * Simplifica la fracción pasada por referncia
	 */
	void simplificar(fraccion *f);


#endif /* FRACCIONES_H_ */
