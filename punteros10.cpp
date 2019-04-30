#include <stdio.h>
#include <stdlib.h>

int inicializa (int *mat, int n);
int main (){
	int n;
	int *mat;
	
	printf ("Introduzca el número de filas y columnas de la matriz (que sera cuadrada; siendo num de filas=column): ");
	scanf ("%d", &n);
	
	mat = (int*)malloc(sizeof(int)*n*n);
	
	inicializa (mat, n);
	
	for (int i=0; i<n; i++){
	for (int j=0; j<n; j++){
		printf("%d ",mat[i*n+j]);
	}
	printf("\n");
}
free (mat);
return 0;
}

int inicializa (int *mat, int n){
		for (int i=0; i<n; i++){
	for (int j=0; j<n; j++){
		if (i==j){
		mat[i*n+j] = 1;
		}
		else {
			mat [i*n+j]= 0;
		}
	
	}
}
	
}
