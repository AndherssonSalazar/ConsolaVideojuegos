#include "../../cabeceras/nave/Meteorito.h"
#include "../../cabeceras/Consola.h"
#include "../../cabeceras/nave/Nave.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
METEORITO::METEORITO(int _x, int _y): x(_x), y(_y){
		
}
int METEORITO::coordenadaX() {
	return x; 
}
int METEORITO::coordenadaY() {
	return y; 
}
void METEORITO::pintar(){
	gotoxy(x,y); cout<<char(184);
}
void METEORITO::mover(){
	gotoxy(x,y); cout<<" ";
	y++;
	if(y > 27){
		x = rand()%111 + 4;
		y = 4;
	}
	pintar();
}
void METEORITO::choque(class NAVE &miNave){
	if(x >= miNave.coordenadaX() && x < miNave.coordenadaX()+6 && y >= miNave.coordenadaY() && y <= miNave.coordenadaY()+2){
		miNave.disminuirCorazones();
		miNave.borrar();
		miNave.pintar();
		miNave.pintarCorazones();
		x = rand()%111 + 4;
		y = 4;
	}
}
