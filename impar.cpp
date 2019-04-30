#include <stdio.h>
#include <stdlib.h>


int espar (int num);
int damepar (int num);
int main () {
	int filas, column;
	int *mat;
	int num;
	printf ("Introduce el numero de filas de la matriz: ");
	scanf ("%d", &filas);
	printf ("Introduce el numero de columnas de la matriz: ");	
	scanf ("%d", &column);
	
	mat = (int*)malloc(sizeof(int)*filas*column);
	
		for (int i=0; i<filas; i++){
	 		for (int j=0; j<column; j++){
	 			num = damepar (num);
	 		mat[i*filas+j] = num;
	 	}
	 }

	 	 for (int i=0; i<filas; i++){
	 	for (int j=0; j<column; j++){
	 		printf ("%d ",mat[i*filas+j]);
	 	}
	 	printf ("\n");
	 }
	 
free (mat);
return 0;
}

int damepar (int num ) {
	num++;
	while (!espar(num)){
		num++;
	}
return num;
}

int espar(int num){
	for(int i=0; i<num;i++){
		if (num%2==0){
			return 0;
		}
	}
}
