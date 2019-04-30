#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char cad[100];
	printf ("Introduce una cadena: ");
	fgets (cad,100,stdin);
	
	int longitud = strlen(cad)-1;
	printf ("La longitud de la cadena es de %d caracteres.\n", longitud);
	
	char cad1[]= "comparacion";
	printf ("Comparacion de las cadenas: %d\n", strcmp(cad1,cad));
	
	char cad2[]= "anadida";
	strcat(cad,cad2);
	printf ("Concatenacion: %s",cad);
}
