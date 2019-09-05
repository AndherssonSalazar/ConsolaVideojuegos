#ifndef JUEGO_NAVE_H
#define JUEGO_NAVE_H
#include "../Juego.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class JUEGO_NAVE : public JUEGO{
	public:
		JUEGO_NAVE();
		void empezarJuego() override;
		void pintarLimites() override;
		void mostrarInstrucciones() override;
};

#endif
