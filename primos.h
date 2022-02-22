#include <stdio.h>

/**
* Returns the number of cousins numbers between VI and VF.
* ShowNumbers shows all cosins if the value it's 1.
**/

int CousinsBetween(int VI,int VF,int ShowNumbers);

int CousinsBetween(int VI,int VF,int ShowNumbers)
{
	int divisores,i,Cousins,VI2;
	VI2=VI;
	if(VI>=0 && VI<=VF)
	{
		do
		{
			divisores=0; //Contar los divisores del número		
			for(i=1;i<=VF;i++)
			{
				if(VI%i==0) //Si VI/i es Residuo=0, incrementamos divisores en 1.
				{
					divisores++;
				}
			}
			if(divisores==2) //Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.
			{
				switch(ShowNumbers)
				{
					case 1:
						printf("\n\t\t%d es primo.\n",VI);
						break;
					default:
					break;
				}
				Cousins++;
			}
			VI++;
		}while(VI!=(VF+1));
		printf("\n\tHay %d números Cousins entre %d y %d.\n\n",Cousins,VI2,VF);
	}
	else if(VI<0)
	{
		printf("\n\t\tVI no puede ser negativo.\n\n");
	}
	else if(VI>VF)
	{
		printf("\n\t\tVF debe ser MAYOR que VI.\n\n");
	}	
}

int EsPrimo(int n)
{
	int divisores,i;
	if(n>=0)
	{
		divisores=0; //Contar los divisores del número		
		for(i=1;i<=n;i++)
		{
			if(n%i==0) //Si VI/i es Residuo=0, incrementamos divisores en 1.
			{	
					divisores++;	
			}
		}
		if(divisores==2) //Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.
		{
			printf("\n\t\t%d es primo.\n\n",n);
		}
		else
		{
			printf("\n\t\t%d NO es primo.\n\n",n);
		}
	}
	else
	{
		printf("\n\t Un numero primo debe ser positivo.\n\n");
	}
	return 0;
}
