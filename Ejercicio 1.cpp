#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	static double salario, horas, horasPagadas;
	
	system("cls");
	
	do
	{
		cout<<"\nPresione en cualquier momento 'ctrl + c' para salir";
		
		cout<<"\n\n\nDigite el salario del trabajador en pesos:\t$ ";
		cin>> salario;
		if(salario <= 0)
		{
			cout<<"\nSalario Erroneo, se abortara la aplicacion...";
			return 0;
		}

		cout<<"\nDigite las horas trabajadas por el empleado:\t ";
		cin>> horas;
		if(horas <= 0)
		{
			cout<<"\nHoras Erroneas, se abortara la aplicacion...";
			return 0;
		}


		if(horas <= 40)
		{
			salario /= horas;
			horasPagadas = salario * horas;								//Horas Normales
			cout<<"\nSon " << horas << " horas pagadas a $" << horasPagadas << " cada una";
		}
		else
		{
			if(horas <= 48)
			{
				horasPagadas = 40 * (salario / horas);					//Horas Normales
				horasPagadas += (horas -40) * (2 * salario / horas);	//Horas Extras x 2
				cout<<"\nSon 40 horas a $" << 40 * (salario / horas) << " mas " << (horas -40) << " horas extras pagadas al doble a $" << (horas -40) * (2 * salario / horas);
			}
			else
			{
				horasPagadas = 40 * (salario / horas);					//Horas Normales
				horasPagadas += 8 * (2 * salario / horas);				//Horas Extras x 2
				horasPagadas += (horas - 48) * (3 * salario / horas);	//Horas Extras x 3
				cout<<"\nSon 40 horas a $" << 40 * (salario / horas) << " mas 8 horas extras pagadas al doble a $" << 8 * (2 * salario / horas);
				cout<<"\nMas " << (horas -48) << " horas extras pagadas al triple a $" << (horas - 48) * (3 * salario / horas);
			}
		}
		
		cout<<"\nEl salario total a pagar por " << horas << " horas trabajadas es: \t$" << horasPagadas ;
		cout<<"\n\n\n";
		system("cls");
	} while (EOF);

	return 0;
}