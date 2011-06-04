#include <iostream.h>

main()
{
	int i= 0;
	double L = 1, n;

	cout<<"Digite la cantidad de tanques de gasolina:\t";
	cin>> n;

	if(n > 1)
		for(i = 0; i <= n; i++)
			L += (1 / (2 * n - 1));
	
	L *= 500;
	
	cout<<"\nLos kilometros que puede recorrer el jeep son " << L << endl;

	return 0;
}
