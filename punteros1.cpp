#include <stdio.h>
#include <stdlib.h>

int main () {
	int tam;
	int *vect;
	
	printf ("Indique el tamaño del vector: ");
	scanf ("%d",&tam);
	
	vect = (int*)malloc(tam*sizeof(int));
	
	printf ("Introduzca uno a uno los valores del vector: ");
	for (int i=0; i<tam; i++) {
		scanf ("%d", &vect[i]);
	}
	
	int min=vect[0];
	for (int j=0; j<tam; j++){
		if(vect[j]<min){
			min = vect[j];
		}
	}
	
	printf ("El valor minimo del vector es: %d", min);
}
