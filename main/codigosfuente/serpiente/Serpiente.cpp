#include "../../cabeceras/serpiente/Serpiente.h"
#include "../../cabeceras/Consola.h"
#include "../../cabeceras/serpiente/Comida.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
SERPIENTE::SERPIENTE(int _x, int _y, int _direccion, int _velocidad): x(_x), y(_y), direccion(_direccion), velocidad(_velocidad){
	guardarPosicion();
}
void SERPIENTE::guardarPosicion(){
	for(int i=1; i<tamagno; i++){
		cuerpo[i-1][0]=cuerpo[i][0];
		cuerpo[i-1][1]=cuerpo[i][1];
	}
	cuerpo[tamagno-1][0]=x;
	cuerpo[tamagno-1][1]=y;
}
void SERPIENTE::pintar(){
	gotoxy(cuerpo[tamagno-1][0], cuerpo[tamagno-1][1]);cout<<char(184);
}
void SERPIENTE::borrar(){
	gotoxy(cuerpo[0][0], cuerpo[0][1]); cout<<" ";
}
void SERPIENTE::mover(){
	if(direccion == IZQUIERDA){
		x--;
		return;
	}else if(direccion == ARRIBA){
		y--;
		return;
	}else if(direccion == DERECHA){
		x++;
		return;
	}else if(direccion == ABAJO){
		y++;
		return;
	} 
}
void SERPIENTE::cambiarDireccion(){
	if(teclaEstaPresionada(IZQUIERDA) && (direccion != DERECHA)){
		direccion=IZQUIERDA;
		return;
	}
	if(teclaEstaPresionada(ARRIBA) && (direccion != ABAJO)){
		direccion=ARRIBA;
		return;
	} 
	if(teclaEstaPresionada(DERECHA) && (direccion != IZQUIERDA)){
		direccion=DERECHA;
		return;
	} 
	if(teclaEstaPresionada(ABAJO) && (direccion != ARRIBA)){
		direccion=ABAJO;
		return;
	}
}
int SERPIENTE::obtenerVelocidad(){
	return velocidad;
}
void SERPIENTE::cambiarVelocidad(){
	if(velocidad>=15) velocidad--;
	
}
void SERPIENTE::comer(class COMIDA &comida){
	if(x == comida.coordenadaX() && y == comida.coordenadaY()){
		comida.cambiarPosicion();
		tamagno++;
		puntaje +=10;
		cambiarVelocidad();
	}
}
bool SERPIENTE::morir(){
	if(y == 3 || y == 28 || x == 2 || x == 117) return true;
	for(int j = tamagno -1; j >= 0; j--){
		if(cuerpo[j][0] == x && cuerpo[j][1] == y) return true;
	}
	return false;
}
void SERPIENTE::pintarPuntos(){
	gotoxy(3,1); cout<<"PUNTOS: "<<puntaje;
}
