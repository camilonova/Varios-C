#include <iostream.h>


main()
{
	int i, j;
	double numero[4];						// [3] es una variable temporal y [4] almacena \0
	
	cout<<"\nDigite el Primer numero:\t";
	cin>> numero[0];

	cout<<"\nDigite el Segundo numero:\t";
	cin>> numero[1];

	cout<<"\nDigite el Tercer numero:\t";
	cin>> numero[2];

	for(j = 0; j <= 3; j++)
	{
		for(i = 0; i <= 3; i++)
		{
			if(numero[i] >= numero[i + 1])
			{
				numero[3] = numero[i];
				numero[i] = numero[i + 1];
				numero[i + 1] = numero[3];
			}
		}	
	}

	cout<<"\nEl numero central es:\t" << numero[1]; 
	cout<<"\n" << endl;

	return 0;
}