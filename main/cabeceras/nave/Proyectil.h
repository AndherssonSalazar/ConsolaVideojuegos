#ifndef PROYECTIL_H
#define PROYECTIL_H
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class PROYECTIL{
	private:
		int x, y;
	public:
		PROYECTIL(int _x, int _y);
		int coordenadaX();
		int coordenadaY();
		void mover();
		bool fuera();
};

#endif
