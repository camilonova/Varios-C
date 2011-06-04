/* Convierte temperaturas Fahrenheit a Celsius */

#include <stdio.h>

main()
{
	int		fahrenheit;
	double	celsius;

	printf("\n\nDigite una temperatura en Fahrenheit:\t");
	scanf("%d", &fahrenheit);

	if(fahrenheit >= 0 && fahrenheit <= 212)
	{
		celsius = (5.0 / 9.0) * (fahrenheit - 32);

		printf("\nLa temperatura en celsius es:\t%+.3lf\n\n", celsius);

	}
	else
		printf("\n\nRango de temperatura no valido (0-212)");

	return 0;
}