
#include <stdio.h>
#include <stdlib.h>

int main () {
	int filas, column;
	int *mat;
	int suma = 0;
	printf ("Introduce el numero de filas de la matriz: ");
	scanf ("%d", &filas);
	printf ("Introduce el numero de columnas de la matriz: ");	
	scanf ("%d", &column);
	
	mat = (int*)malloc(sizeof(int)*filas*column);
	
		printf ("Introduce uno a uno los elementos: ");
		for (int i=0; i<filas; i++){
	 		for (int j=0; j<column; j++){
	 		scanf ("%d",(mat+(i*filas)+j));
	 		suma +=mat[i*filas+j];
	 	}
	 }

	 
	 	 for (int i=0; i<filas; i++){
	 	for (int j=0; j<column; j++){
	 		printf ("%d",mat[i*filas+j]);
	 	}
	 	printf ("\n");
	}
	printf ("La suma de los elementos de la matriz es: %d\n", suma);

free (mat);
return 0;
}

