#include <iostream.h>

main()
{
	int i, j;
	static float calificaciones[10][5];
	double promedio = 0;

	for(i = 0; i < 10; i++)
		for(j = 0; j < 5; j++)
		{
			cout<<"\nAlumno numero " << i + 1 <<", nota " << j + 1 <<" :\t";
			cin>> calificaciones[i][j];
			
			if(calificaciones[i][j] < 0 || calificaciones[i][j] > 5)
			{
				cout<<"\nNo es una nota correcta... Digite entre (0 - 5)";
				j--;
			}
		}

	cout<<"\n\n\n";

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 5; j++)
			promedio += calificaciones[i][j];
		
		promedio /= 5;

		if(promedio < 3)
			cout<<"\nEl Alumno " << i + 1 <<", No puede presentar examen de nivelacion, promedio igual a: \t" << promedio << endl;
		else
			cout<<"\nEl Alumno " << i + 1 <<", puede presentar examen de nivelacion, promedio igual a: \t" << promedio << endl;
			
		promedio = 0;
	}

	cout<<"\n\n";
			
	return 0;
}
		

