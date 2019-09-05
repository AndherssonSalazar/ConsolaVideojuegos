#ifndef COMIDA_H
#define COMIDA_H
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class COMIDA{
	private:
		int x, y;
	public:
		COMIDA(int _x, int _y);
		int coordenadaX();
		int coordenadaY();
		void cambiarPosicion();
		void pintar();
};

#endif
