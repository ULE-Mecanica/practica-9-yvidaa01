#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main () {
int *mat;
int num=1;
int filas, column;
srand(time(NULL));


	printf ("Introduce el numero de filas de la matriz: ");
	scanf ("%d", &filas);
	printf ("Introduce el numero de columnas de la matriz: ");	
	scanf ("%d", &column);
	
	mat = (int*)malloc(sizeof(int)*filas*column);
	
for (int i=0; i<filas; i++){
	for (int j=0; j<column; j++){
		mat[i*filas+j]= (rand()%100)+1;
	
	}
}
for (int i=0; i<filas; i++){
	for (int j=0; j<column; j++){
		printf("%d ",mat[i*filas+j]);
	}
	printf("\n");
}

}
