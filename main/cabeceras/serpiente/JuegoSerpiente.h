#ifndef JUEGO_SERPIENTE_H
#define JUEGO_SERPIENTE_H
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
class JUEGO_SERPIENTE : public JUEGO{
	public:
		JUEGO_SERPIENTE();
		void empezarJuego() override;
		void pintarLimites() override;
		void mostrarInstrucciones() override;
};

#endif
