#include <iostream.h>

main()
{
	static int i, a, b, c;
	static double numeros[20];

	while(i <= 19)
	{
		cout<< "Digite el numero:\t";
		cin>> numeros[i];
		i++;
	}

	for(i = 0; i <= 19; i++)
	{
		if(numeros[i] < 0)
			a++;
		if(numeros[i] == 0)
			b++;
		if(numeros[i] > 0)
			c++;
	}

	cout<<"\nNumeros Negativos:\t" << a;
	cout<<"\nNumeros Neutros:\t" << b;
	cout<<"\nNumeros Positivos:\t" << c << endl;

	return 0;
}