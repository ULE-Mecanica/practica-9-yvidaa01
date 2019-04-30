#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaespacios (char *cad, char *cadenasin);

int main () {
 int n;
char *cadenasin;
 char *cad;
 
 printf ("Introduzca la longitud de la cadena: ");
 scanf ("%d",&n);
 
 cad = (char*)malloc(sizeof(char)*n);
 cadenasin= (char*)malloc(sizeof(char)*n);
 
 printf ("Introduzca la cadena: ");
 while(getchar()!='\n');
fgets (cad,n,stdin);
 
 quitaespacios (cad,cadenasin);
 
 printf ("La nueva cadena sin espacios es: %s", cadenasin);
 free (cad);
 return 0; 
}

void quitaespacios (char *cad, char *cadenasin){
	int longitud = strlen (cad);
	int k=0;
	for (int i=0; i<=longitud; i++){
		if (*(cad+i)!=' '){
		*(cadenasin+k)= *(cad+i);
		k++;
		}
	}
}
