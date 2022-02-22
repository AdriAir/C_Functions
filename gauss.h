#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int AproxGauss(int n, int m);

int AproxGauss(int n, int m)
{
	
	int a,divisores,i;
	double emax;
	float error, primos;
	if(n==0&&m==0)
	{
		exit(-1);
	}
	else if(n>=0&&n<=100000&&m>=0&&m<=5)
	{
		a=n;
		do{
			divisores=0; //Contar los divisores del número		
			for(i=1;i<=a;i++)
			{
				if(a%i==0) //Si a módulo de i es 0, incrementamos divisores en 1.
			    {
					divisores++;
				}
			}
			if(divisores==2) //Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.
			{
				//printf("\n%d es primo.",a);
			    primos++;
			}
			a--;
		}while(a>1);
		error=primos/n-1/log(n);
		emax=pow(10,-m);
		printf("\nError: %f\nError_Max: %lf\n",fabs(error),emax);
		if(fabs(error) > emax)
		{
			printf("\nError es MAYOR que Error_Max\n\n");
		}
		else if(fabs(error) < emax)
		{
			printf("\nError es MENOR que Error_Max\n\n");
		}
		else
		{
			printf("\nError es IGUAL que Error_Max\n\n");
		}
		system("pause");
	}
	return 0;
}
