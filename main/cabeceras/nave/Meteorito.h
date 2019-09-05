#ifndef METEORITO_H
#define METEORITO_H
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class METEORITO{
	private:
		int x, y;
	public:
		METEORITO(int _x, int _y);
		int coordenadaX();
		int coordenadaY();
		void pintar();
		void mover();
		void choque(class NAVE &miNave);
};

#endif
