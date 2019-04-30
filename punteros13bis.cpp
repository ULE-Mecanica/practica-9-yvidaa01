#include <stdio.h>
#include <stdlib.h>

int matriz (int n, int *mat);
void imprime (int *mat, int n);

int main (){
	int  n;
	int *mat;
	
	printf ("Introduce el tamano de la matriz: ");
	scanf ("%d", &n);
	
	mat = (int*)malloc(sizeof(int)*n*n); 
	
	matriz (n, mat);
	imprime (mat, n);
	
	free(mat);
	return 0;
}

int matriz (int n, int *mat){
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if(i==j){
				mat[i*n+j]=1;
			}
			else{
				mat[i*n+j]=0;
			}
		}
	}
}

void imprime (int *mat, int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n;j++){
			printf ("%d ", mat[i*n+j]);
		}
		printf ("\n");
	}
}

