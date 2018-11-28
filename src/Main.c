/*
 * Main.c
 *
 *  Created on: Nov 9, 2018
 *  Alumnos:
 *  RUTH ABIGAIL ESPINOZA
	ALEXIS ALONSO RIVERA GARCIA
	EDUARDO HERON GUARDADO FIGAROLA
	ALBERTO EMILIANO OLIVA MUÑIZ
	CESAR GARCIA MARTINEZ
	JONATHAN DEL ANGEL GONZALEZ

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
