#include "../../cabeceras/nave/JuegoNave.h"
#include "../../cabeceras/Consola.h"
#include "../../cabeceras/nave/Nave.h"
#include "../../cabeceras/nave/Meteorito.h"
#include "../../cabeceras/nave/Proyectil.h"
#include <stdlib.h>
#include <list>
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
JUEGO_NAVE::JUEGO_NAVE(){
	
}
void JUEGO_NAVE::empezarJuego(){
	system("CLS");
	mostrarInstrucciones();
	system("CLS");
	pintarLimites();
	NAVE miNave(40, 25, 3, 3);
	miNave.pintar();
	miNave.pintarCorazones();
	
	list<METEORITO*> listaMeteoritos;
	list<METEORITO*>::iterator iteradorListaMeteoritos;
	for(int i = 0; i < 5; i++){
		listaMeteoritos.push_back(new METEORITO(rand()%115 + 3, 4));
	}
	list<PROYECTIL*> listaBalas;
	list<PROYECTIL*>::iterator iteradorListaBalas;
	while(!juegoTerminado){
		
		gotoxy(4,2); cout<<"PUNTOS "<<puntos;
		if(teclaEstaPresionada(0x51)){
			listaBalas.push_back(new PROYECTIL(miNave.coordenadaX() +2, miNave.coordenadaY() - 1));
		} else if(teclaEstaPresionada(ESC)){
			juegoTerminado=true;
		}
		for(iteradorListaBalas = listaBalas.begin(); iteradorListaBalas != listaBalas.end(); iteradorListaBalas++){
			(*iteradorListaBalas)->mover();
			if((*iteradorListaBalas)->fuera()){
				gotoxy((*iteradorListaBalas)->coordenadaX(), (*iteradorListaBalas)->coordenadaY()); cout<<" ";
				delete(*iteradorListaBalas);
				iteradorListaBalas = listaBalas.erase(iteradorListaBalas);
			}
		}
		for(iteradorListaMeteoritos = listaMeteoritos.begin(); iteradorListaMeteoritos != listaMeteoritos.end(); iteradorListaMeteoritos ++){
			(*iteradorListaMeteoritos)->mover();
			(*iteradorListaMeteoritos)->choque(miNave);
			for(iteradorListaBalas = listaBalas.begin(); iteradorListaBalas != listaBalas.end(); iteradorListaBalas ++){				
				if((*iteradorListaMeteoritos)->coordenadaX() == (*iteradorListaBalas)->coordenadaX() && ((*iteradorListaMeteoritos)->coordenadaY() + 1 == (*iteradorListaBalas)->coordenadaY() || (*iteradorListaMeteoritos)->coordenadaY() == (*iteradorListaBalas)->coordenadaY())){
					gotoxy((*iteradorListaBalas)->coordenadaX(), (*iteradorListaBalas)->coordenadaY()); cout<<" ";
					delete(*iteradorListaBalas);
					iteradorListaBalas = listaBalas.erase(iteradorListaBalas);
					listaMeteoritos.push_back(new METEORITO(rand()%114 + 3, 4));
					gotoxy((*iteradorListaMeteoritos)->coordenadaX(), (*iteradorListaMeteoritos)->coordenadaY()); cout<<" ";
					delete(*iteradorListaMeteoritos);
					iteradorListaMeteoritos = listaMeteoritos.erase(iteradorListaMeteoritos);
					puntos+=5; 
				}
			}
		}
		if(miNave.obtenerVidas() == 0) juegoTerminado = true;
		miNave.morir();
		miNave.mover();
		Sleep(25);
	}
}
void JUEGO_NAVE::pintarLimites(){
	JUEGO::pintarLimites();
}
void JUEGO_NAVE::mostrarInstrucciones(){
	JUEGO::mostrarInstrucciones();
		
	cout<<"\n\n\n\n\n\t                            ???  "<<endl;
	cout<<"\tPara disparar presione:     ?q?  "<<endl;
	cout<<"\t                            ???  "<<endl;
	getche();
}
