
//Programa que convierte un numero decimal a un numero binario

#include <iostream.h>

main()
{
	int numeroEntero = 0, residuo[50], cociente = 0, c = 1, k = 0;
	double numero = 0, puntoFlotante = 0, cocienteFlotante = 0;

	cout<<"\nDigite el numero decimal:\t";		//El numero puede tener maximo tres digitos despues de la coma
	cin>> numero;
	cout<<"\nEl numero binario es:\t";
											// Proceso antes de la coma decimal
	numeroEntero = numero;

	do										//En este proceso se obtienen los numeros en orden inverso
	{										
		cociente = (numeroEntero / 2);
		residuo[c] = (numeroEntero % 2);
		
		numeroEntero = cociente;

		c++;

	} while(cociente > 0);

	for( c -= 1 ; c > 0; c--)			//Ciclo que escribe cada digito en orden contrario al obtenido
		cout<< residuo[c];

	cout<<".";
										// Proceso despues de la coma decimal
	
	numeroEntero = numero;
	cocienteFlotante = numero - numeroEntero;
	do										//En este proceso se obtienen los numeros ordenados
	{
		puntoFlotante = cocienteFlotante * 2;
		k = puntoFlotante;
		cocienteFlotante = puntoFlotante - k;
		cout<< k;								//Se escriben los numeros despues del punto
	} while (puntoFlotante > 0);

	return 0;
}
