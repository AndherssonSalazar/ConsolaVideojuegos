#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "../Consola.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class PERSONAJE{
	private:
		int x, y, vidas, direccion;
		int mapa[MAPA_FILAS][MAPA_COLUMNAS];
	public:
		PERSONAJE(int _x, int _y, int _vidas, int _direccion, int _mapa[MAPA_FILAS][MAPA_COLUMNAS]);
		int obtenerCoordenadaX();
		int obtenerCoordenadaY();
		int obtenerVidas();
		int obtenerDireccion();
		void mover();
		void pintar();
		void borrar();
		void comer();
		void morir();
		bool gano();
};

#endif
