#ifndef NAVE_H
#define NAVE_H
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class NAVE{
	private:
		int x, y, vidas, corazones;
    public:
		NAVE(int _x, int _y, int _vidas, int _corazones);
		int coordenadaX();
		int coordenadaY();
		int obtenerCorazones();
		int obtenerVidas();
		void disminuirCorazones();
		void disminuirVidas();
		void pintar();
		void borrar();
		void mover();
		void morir();
		void pintarCorazones();
};

#endif
