#include <stdio.h>
#include <stdlib.h>

int main (){
int tam;
int *vec;
float suma=0;
int cont=0; 

printf ("Introduzca el tama�o del vector: ");
scanf ("%d", &tam);

vec= ((int*)malloc(tam*(sizeof(int))));

printf ("Introduzca los valores del vector: ");
for (int i=0;i<tam;i++){
	scanf("%d",&vec[i]);
	suma += vec[i];
	cont ++;
}	
suma = suma/cont;

printf ("La media aritm�tica del vector es: %f", suma);
free(vec);
return 0;
}
