#include <iostream.h>

// Algoritmo para 2^n
// Camilo Hernando Nova
void main() {
	int n, resultado = 1;

	cout<< "Programa para calcular el valor de 2^n" << endl;
   cout<< "Digite el valor de n:\t";
   cin>> n;

   for(int i=0; i < n; i++)
   	resultado *= 2;

   cout<< "El resultado de calcular 2^" << n << " es " << resultado;

   cin.get();
   cin.get();
}
