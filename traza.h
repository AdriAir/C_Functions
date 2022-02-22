#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void DibujarCuadro(int x1,int y1,int x2,int y2);	//Draw a windows
void GotoXY(int x,int y);	//Goes to XY
void FullScreen();	//Force fullscreen mode

//FUNCION GotoXY (Te dirije a unas coordenadas específicas)
void GotoXY(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }


//FUNCION DibujarCuadro (Dibuja Cuadro)
void DibujarCuadro(int x1,int y1,int x2,int y2){
	int i;

    for (i=x1;i<x2;i++){
		GotoXY(i,y1); printf("\304"); //linea horizontal superior
		GotoXY(i,y2); printf("\304"); //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		GotoXY(x1,i); printf("\263"); //linea vertical izquierda
		GotoXY(x2,i); printf("\263"); //linea vertical derecha
	}

    GotoXY(x1,y1); printf("\332");
    GotoXY(x1,y2); printf("\300");
    GotoXY(x2,y1); printf("\277");
    GotoXY(x2,y2); printf("\331");
}

void FullScreen()
{
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
} 
