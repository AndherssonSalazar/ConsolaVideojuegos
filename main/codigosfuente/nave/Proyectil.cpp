#include "../../cabeceras/nave/Proyectil.h"
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
PROYECTIL::PROYECTIL(int _x, int _y): x(_x), y(_y){
		
}
int PROYECTIL::coordenadaX(){ 
	return x;
}
int PROYECTIL::coordenadaY(){ 
	return y; 
}
void PROYECTIL::mover(){
	gotoxy(x,y); cout<<" ";
	if(y > 4) y--;
	gotoxy(x,y); cout<<"*";
}
bool PROYECTIL::fuera(){
	if(y == 4) return true;
	return false;
}
