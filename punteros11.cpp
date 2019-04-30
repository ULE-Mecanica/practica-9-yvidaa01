#include <stdio.h>
#include <stdlib.h>

int main () {
int *mat;
int num;
int filas, column;

	printf ("Introduce el numero de filas de la matriz: ");
	scanf ("%d", &filas);
	printf ("Introduce el numero de columnas de la matriz: ");	
	scanf ("%d", &column);
	
	mat = (int*)malloc(sizeof(int)*filas*column);
	num= filas * column;
	
	for (int i=0; i<filas; i++){
	for (int j=0; j<column; j++){
		mat[i*filas+j]= num;
		num--;
	
	}
}
for (int i=0; i<filas; i++){
	for (int j=0; j<column; j++){
		printf("%d ",mat[i*filas+j]);
	}
	printf("\n");
}

free (mat);
return 0;
}
