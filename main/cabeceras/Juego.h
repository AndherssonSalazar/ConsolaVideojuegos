#ifndef JUEGO_H
#define JUEGO_H
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class JUEGO{
	protected:
		int puntos = 0;
		bool juegoTerminado=false;
	public:
		virtual void empezarJuego()=0;
		virtual void pintarLimites();
		virtual void mostrarInstrucciones();
};

#endif
