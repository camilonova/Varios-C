#include <stdio.h>

main()
{
	static long int i, j;
	double pi = 4;

	printf("\n\nPrograma que calcula el valor de la constante PI");
	printf("\nDigite el numero de aproximaciones que desee:\t");
	scanf("%d", &j);

	if(j < 0)
		j = -1 * j;

	printf("\n\nEsto puede tomar unos algunos segundos, espere por favor...\n\n");

	for(i = 3; i < (j * 4); i += 4)
	{
		pi += ((double)4 / i);
		pi -= ((double)4 / (i + 2));

		printf("%.8lf\t", pi);
	}

	printf("\n\n\nNumero PI obtenido: %lf en %d aproximaciones\n\n\n", pi, (i - 3) / 4);

	return 0;
}

