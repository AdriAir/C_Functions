#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Returns a int number between Min and Max
**/

int AleatorioEntre(int Min,int Max);

int AleatorioEntre(int Min,int Max)
{
	int Aleatorio;
	if(Min>Max)  
    {  
        printf("El valor máximo debe ser mayor que el mínimo\n");
        system("pause");
    }  
	else
	{
		srand(time(NULL));
		Aleatorio=(rand() % (Max - Min +1)) + Min;
		return Aleatorio;
		system("pause");
	}
}
