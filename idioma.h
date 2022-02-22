#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/**
* Shortcut to set the C file lenguage.
**/
void ES();
void DE();
void CA();
void FR();
void PR();
void IT();

void ES()
{
	setlocale(LC_CTYPE,"Spanish");	
}
void DE()
{
	setlocale(LC_CTYPE,"German");	
}
void CA()
{
	setlocale(LC_CTYPE,"Catalan");	
}
void FR()
{
	setlocale(LC_CTYPE,"French");	
}
void PR()
{
	setlocale(LC_CTYPE,"Portuguese");	
}
void IT()
{
	setlocale(LC_CTYPE,"Italian");	
}
