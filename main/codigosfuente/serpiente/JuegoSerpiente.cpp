#include "../../cabeceras/serpiente/JuegoSerpiente.h"
#include "../../cabeceras/Consola.h"
#include "../../cabeceras/serpiente/Serpiente.h"
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
JUEGO_SERPIENTE::JUEGO_SERPIENTE(){
	
}
void JUEGO_SERPIENTE::empezarJuego(){
	system("CLS");
	mostrarInstrucciones();
	system("CLS");
	pintarLimites();
	COMIDA comida(30,12);
	comida.pintar();
	SERPIENTE serpiente(10, 12, DERECHA, 120);
	while(!juegoTerminado){
		serpiente.borrar();
		serpiente.guardarPosicion();
		serpiente.pintar();
		serpiente.comer(comida);
		serpiente.pintarPuntos();
		serpiente.cambiarDireccion();
		serpiente.mover();
		Sleep(serpiente.obtenerVelocidad());
		juegoTerminado=serpiente.morir();
		if(teclaEstaPresionada(ESC)){
			juegoTerminado=true;
		}
	}
	
}
void JUEGO_SERPIENTE::mostrarInstrucciones(){
	JUEGO::mostrarInstrucciones();
	getche();
}
void JUEGO_SERPIENTE::pintarLimites(){
	JUEGO::pintarLimites();
}
