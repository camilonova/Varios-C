#include <iostream.h>

main()
{
	bool verdad = false;
	static int i, Y;
	char test[2], pass[10];
	char hi[] = "linuxpower";

	do
	{
		cout<<"\nDigite el primer numero magico...\t:";
		cin>> test[0];
		cout<<"\nDigite el segundo numero magico...\t:";
		cin>> test[1];
		
		if(test[0] == '1')
		{
			switch(test[1])
			{
				case '0':
					cout<<"\n\n\nBienvenido, Digite su llave personal:\t";
					cin>>pass;
					
					for(i = 0; i < 10; i++)
					{
						if(pass[i] == hi[i])
							Y += 8;
					}
					
					if(Y == 80)
						verdad = true;
					else
						cout<<"\n\nEres un Intruso, Jamas lo lograras...";
					
					break;
				
				default:
					cout<<"\n\nEstas intentando acceder ilegalmente a mi Mundo...";
					break;
			}
		}
		
		else
			cout<<"\n\nDolorosamente, incorrecto...";

	} while(!verdad);

	return 0;
}