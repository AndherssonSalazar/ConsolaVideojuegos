#include "../../cabeceras/serpiente/Comida.h"
#include "../../cabeceras/Consola.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
COMIDA::COMIDA(int _x, int _y): x(_x), y(_y){
	
}
int COMIDA::coordenadaX(){
	return x;
}
int COMIDA::coordenadaY(){
	return y;
}
void COMIDA::cambiarPosicion(){
	x = (rand()%111)+4;
	y = (rand()%19)+4;
	pintar();
}
void COMIDA::pintar(){
	gotoxy(x,y); cout<<char(254);
}
