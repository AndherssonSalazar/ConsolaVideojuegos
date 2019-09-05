#include "../../cabeceras/nave/Nave.h"
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
NAVE::NAVE(int _x, int _y, int _vidas, int _corazones): x(_x), y(_y), vidas(_vidas), corazones(_corazones){
	
}
int NAVE::coordenadaX(){
	return x;
}
int NAVE::coordenadaY(){
	return y;
}
int NAVE::obtenerCorazones(){
	return corazones;
}
int NAVE::obtenerVidas(){
	return vidas;
}
void NAVE::disminuirCorazones(){
	corazones--;
}
void NAVE::disminuirVidas(){
	vidas--;
}
void NAVE::pintar(){
	gotoxy(x,y);   cout<<"  "<<char(206);
	gotoxy(x,y+1); cout<<" "<<char(40)<<char(207)<<char(41);
	gotoxy(x,y+2); cout<<char(204)<<char(190)<<" "<<char(190)<<char(185);
}
void NAVE::borrar(){
	gotoxy(x,y);   cout<<"        ";
	gotoxy(x,y+1); cout<<"        ";
	gotoxy(x,y+2); cout<<"        ";
	
}
void NAVE::mover(){
	borrar();
	if(teclaEstaPresionada(IZQUIERDA) && x>3) x--;
	if(teclaEstaPresionada(ARRIBA) && y>4) y--;
	if(teclaEstaPresionada(DERECHA) && x+6<115) x++;
	if(teclaEstaPresionada(ABAJO) && y+3<28) y++;
	pintar();
	pintarCorazones();
}
void NAVE::morir(){
	if(corazones == 0){
		borrar();
		gotoxy(x,y);   cout<<"   **   ";
		gotoxy(x,y+1); cout<<"  ****  ";
		gotoxy(x,y+2); cout<<"   **   ";
		Sleep(300);
		borrar();
		gotoxy(x,y);   cout<<" * ** * ";
		gotoxy(x,y+1); cout<<"  ****  ";
		gotoxy(x,y+2); cout<<" * ** * ";
		Sleep(300);
		borrar();
		vidas--;
		corazones = 3;
		pintarCorazones();
		pintar();
	}
}
void NAVE::pintarCorazones(){
	gotoxy(90,2); cout<<"VIDAS "<<vidas;
	gotoxy(104,2);cout<<"Salud";
	gotoxy(110,2); cout<<"      ";
	for(int i = 0; i<corazones; i++){
		gotoxy(110 + i,2); cout<<char(207);
	}
}

