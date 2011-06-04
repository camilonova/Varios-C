#include <iostream.h>

// Programa que calcula la serie de fibonacci de n
// Camilo Hernando Nova
void main() {
	int n, a = 1, b = 1, resultado = 1;

   cout<< "Programa que calcula la serie de Fibonacci de n" << endl;
   cout<< "Digite el valor de n:\t";
   cin>> n;

   for(int i=2; i < n; i++) {
      resultado = a + b;
      a = b;
      b = resultado;
   }

   cout<< "El resultado de calcular Fibonacci(" << n << ") es " << resultado;

   cin.get();
   cin.get();
}