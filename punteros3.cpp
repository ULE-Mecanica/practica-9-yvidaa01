
#include <stdio.h>
#include <stdlib.h>


int esprimo (int num);
int dameprimo (int num);
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
	 			num = dameprimo (num);
	 		mat[i*filas+j] = num;
	 	}
	 }

	 	 for (int i=0; i<filas; i++){
	 	for (int j=0; j<column; j++){
	 		printf ("%d",mat[i*filas+j]);
	 	}
	 	printf ("\n");
	 }
	 
free (mat);
return 0;
}

int dameprimo (int num ) {
	num++;
	while (!esprimo(num)){
		num++;
	}
return num;
}

int esprimo(int num){
	for(int i=2; i<num;i++){
		if (num%i==0){
			return 0;
		}
	}
}
