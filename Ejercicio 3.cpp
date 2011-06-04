#include <iostream.h>

main()
{
	double edad, antiguedad;

	cout<<"Digite la edad de la persona en a~nos:\t";
	cin>> edad;
	cout<<"Digite la antiguedad de la persona en a~nos:\t";
	cin>> antiguedad;
	if(edad <= 0 && antiguedad <= 0)
		return 0;
	
	if(edad >= 60)
	{
		if(antiguedad < 25)
			cout<<"\nJubilacion por Edad\n";
		else
			cout<<"\nJubilacion por Antiguedad Adulta\n";
	}
	else
	{
		if(antiguedad >= 25)
			cout<<"\nJubilacion por Antiguedad Joven\n";
		else
			cout<<"\nAun no se puede Jubilar\n";
	}

	return 0;
}