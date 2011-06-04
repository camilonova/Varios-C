#include <iostream.h>

// Programa para calcular n!
// Camilo Hernando Nova
void main() {
	int n, resultado = 1;

   cout<< "Programa que calcula el valor de n!" << endl;
   cout<< "Digite el valor de n:\t";
   cin>> n;

   for(int i=1; i <= n; i++)
   	resultado *= i;

   cout<< "El resultado de calcular " << n << "! es " << resultado;

   cin.get();
   cin.get();
}