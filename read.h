#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/**
* Print text out the screen with a slowly effect
**/

int slowRead(char text[],int msSpeed);

int slowRead(char text[],int msSpeed)
{
	int i;
	for(i=0;i<=strlen(text);i++){ //Lectura de texto
		printf("%c",text[i]);
		Sleep(msSpeed);
	}
}
