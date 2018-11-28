/*
 * Main.c
 *
 *  Created on: Nov 9, 2018
 *      Author: e.guardado.figarola
 */

#include <stdio.h>
int n;

main(){

	printf("Ingrese la cantidad de numeros primos a mostrar:");
	scanf("%d", & n);
	int vector[n];
	int j = 3;
	for(int i=1;i<=n;i++){

		vector[i]=j;
		j = j+2;
	}
	printf("####");

	printf("Los datos del vector son:\n");
	int length = sizeof (vector) / sizeof (vector[0]);
	for(int x = 1; x <= length; x++) {
		printf("##### %d ", vector[x]);
	    printf("\n");
	}




}
