	/*Programa que determina la longitud de una cadena de texto, utilizando
	  las funciones de la libreria string.h*/

#include <stdio.h>
#include <string.h>

main()
{
	char string[80];

	printf("\nIntroduzca una cadena de texto:");
	gets(string);
	
	printf("\n\nLa cadena \" %s \" tiene %d caracteres\n\n", string, strlen(string));

	return 0;
}