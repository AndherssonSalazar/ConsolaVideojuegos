#include "../cabeceras/Consola.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
void gotoxy(int x, int y){
	HANDLE manipuladorConsolaSalida;
	manipuladorConsolaSalida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD posicionCursor;
	posicionCursor.X = x;
	posicionCursor.Y = y;
	
	SetConsoleCursorPosition(manipuladorConsolaSalida, posicionCursor);
}
void ocultarCursor(){
	HANDLE manipuladorConsolaSalida;
	manipuladorConsolaSalida = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO infoConsolaCursor;
	infoConsolaCursor.dwSize = 2;
	infoConsolaCursor.bVisible = FALSE;
	
	SetConsoleCursorInfo(manipuladorConsolaSalida, &infoConsolaCursor);
}
bool teclaEstaPresionada(int tecla){
	return GetKeyState(tecla) < 0;
}
