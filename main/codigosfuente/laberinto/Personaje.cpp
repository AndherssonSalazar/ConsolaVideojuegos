#include "../../cabeceras/laberinto/Personaje.h"
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
PERSONAJE::PERSONAJE(int _x, int _y, int _vidas, int _direccion, int _mapa[MAPA_FILAS][MAPA_COLUMNAS]) : x(_x), y(_y), vidas(_vidas), direccion(_direccion){
	for(int i=0; i<MAPA_FILAS; i++){
		for(int j=0; j<MAPA_COLUMNAS; j++){
			mapa[i][j]=_mapa[i][j];
		}
	}
}
int PERSONAJE::obtenerCoordenadaX(){
	return x;
}
int PERSONAJE::obtenerCoordenadaY(){
	return y;
}
int PERSONAJE::obtenerDireccion(){
	return direccion;
}
int PERSONAJE::obtenerVidas(){
	return vidas;
}
void PERSONAJE::pintar(){
	gotoxy(x,y);
	if(direccion == IZQUIERDA){
		cout<<char(184)<<char(176);
	} 
	if(direccion == ARRIBA){
		cout<<char(184);
		gotoxy(x,y+1); cout<<char(176);
	}
	if(direccion == DERECHA){
		cout<<char(184);
		gotoxy(x-1,y); cout<<char(176);
	} 
	if(direccion == ABAJO){
		cout<<char(184);
		gotoxy(x,y-1); cout<<char(176);
	}
}
void PERSONAJE::borrar(){
	gotoxy(x,y);
	if(direccion == IZQUIERDA){
		cout<<"  ";
	}
	if(direccion == ARRIBA){
		cout<<" ";
		gotoxy(x,y+1); cout<<" ";
	}
	if(direccion == DERECHA){
		gotoxy(x-1,y); cout<<"  ";
	} 
	if(direccion == ABAJO){
		cout<<" ";
		gotoxy(x,y-1); cout<<" ";
	}
}
void PERSONAJE::comer(){
	
}
void PERSONAJE::morir(){
	
}
void PERSONAJE::mover(){
	if(teclaEstaPresionada(IZQUIERDA) /*&& x>3*/){
		if(mapa[y-3][(x-2)-1]==0){
			x--;
			direccion=IZQUIERDA;
		}
	}
	if(teclaEstaPresionada(ARRIBA) /*&& y>4*/){
		if(mapa[(y-3)-1][(x-2)]==0){
			y--;
			direccion=ARRIBA;
		}
	} 
	if(teclaEstaPresionada(DERECHA) /*&& x<116*/){
		if(mapa[(y-3)][(x-2)+1]==0){
			x++;
			direccion=DERECHA;
		}
	} 
	if(teclaEstaPresionada(ABAJO) /*&& y<27*/){
		if(mapa[(y-3)+1][(x-2)]==0){
			y++;
			direccion=ABAJO;
		}
	}
}
bool PERSONAJE::gano(){
	if((x<=2) || (x>=117) || (y<=3) || (y>=28)){
		return true;
	}
	return false;
}
