#ifndef JUEGO_LABERINTO_H
#define JUEGO_LABERINTO_H
#include "../Juego.h"
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
class JUEGO_LABERINTO : public JUEGO{
	private:
		int mapa[MAPA_FILAS][MAPA_COLUMNAS];
	public:
		JUEGO_LABERINTO();
		void empezarJuego() override;
		void pintarLimites() override;
		void mostrarInstrucciones() override;
		bool cargarMapa(char*);
};

#endif
