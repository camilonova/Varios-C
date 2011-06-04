#include <iostream.h>


void main() {

	int tabla[11];
	int dato = 0;

	cout<< "Digite el numero de la tabla a mostrar" << endl ;
	cin>> dato;

	for(int i=1; i < 11; i++)
		tabla[i] = i * dato;

	for(int j=1; j < 11; j++)
		cout<< tabla[j] << endl;
}