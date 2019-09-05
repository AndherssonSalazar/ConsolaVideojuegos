#ifndef CONSOLA_H
#define COSOLA_H

#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

#define IZQUIERDA 0x25
#define ARRIBA 0x26
#define DERECHA 0x27
#define ABAJO 0x28
#define ESC 0x1B

#define MAPA_FILAS 26
#define MAPA_COLUMNAS 116
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
void gotoxy(int x, int y);
void ocultarCursor();
bool teclaEstaPresionada(int tecla);

#endif
